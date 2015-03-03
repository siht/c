#include<stdio.h>

int suma(int a, int b)
{
     __asm__ __volatile__(
     "addl %%ebx,%%eax;"
     :"=a"(a)
     :"a"(a), "b"(b)
     );
}

int resta(int a, int b)
{
     __asm__ __volatile__(
     "subl %%ebx,%%eax;"
     :"=a"(a)
     :"a"(a), "b"(b)
     );
}

int multiplica(int a, int b)
{
     __asm__ __volatile__(
     "imull %%ebx, %%eax;"
     :"=a"(a)
     :"a"(a), "b"(b)
     );
}

int divide(int a, int b)
{
     __asm__ __volatile__(
     "xorl %%edx, %%edx;"
     "movl %2, %%eax;"
     "movl %3, %%ebx;"
     "idivl %%ebx;"
     : "=d" (b), "=a" (a)
     : "g" (a), "g" (b)
     );
}

int modulo(int a, int b)
{
     __asm__ __volatile__(
     "xorl %%edx, %%edx;"
     "movl %2, %%eax;"
     "movl %3, %%ebx;"
     "idivl %%ebx;"
     : "=a" (a), "=d" (b)
     : "g" (a), "g" (b)
     );
}

float fsuma(float a, float b)
{
    float r;
     __asm__ __volatile__(
     "fld %1;"
     "fld %2;"
     "faddp;"
     "fstp %0;"
     : "=g" (r)
     : "g" (a), "g" (b)
     );
     return r;
}

float fresta(float a, float b)
{
    float r;
     __asm__ __volatile__(
     "fld %1;"
     "fld %2;"
     "fsubp;"
     "fstp %0;"
     : "=g" (r)
     : "g" (b), "g" (a)
     );
     return r;
}

float fmultiplica(float a, float b)
{
    float r;
     __asm__ __volatile__(
     "fld %1;"
     "fld %2;"
     "fmulp;"
     "fstp %0;"
     : "=g" (r)
     : "g" (a), "g" (b)
     );
     return r;
}

float fdivide(float a, float b)
{
    float r;
     __asm__ __volatile__(
     "fld %1;"
     "fld %2;"
     "fdivp;"
     "fstp %0;"
     : "=g" (r)
     : "g" (b), "g" (a)
     );
     return r;
}

int mcd(int a, int b)
{
     int r;
    __asm__ __volatile__ (
     "movl %1, %%eax;"
     "movl %2, %%ebx;"
     "CONTD: cmpl $0, %%ebx;"
     "je DONE;"
     "xorl %%edx, %%edx;"
     "idivl %%ebx;"
     "movl %%ebx, %%eax;"
     "movl %%edx, %%ebx;"
     "jmp CONTD;"
     "DONE: movl %%eax, %0;"
     : "=g" (r)
     : "g" (a), "g" (b)
    );
    return r;
}

int main()
{
    printf("%i\n", suma(1,2));
    printf("%i\n", resta(3,4));
    printf("%i\n", multiplica(3,4));
    printf("%i\n", divide(12,4));
    printf("%i\n", modulo(13,4));
    printf("%f\n", fsuma(13,4.60));
    printf("%f\n", fresta(13,1.8));
    printf("%f\n", fmultiplica(2,.5));
    printf("%f\n", fdivide(1,.5));
    printf("%i\n", mcd(14,77));
    getchar();
    return 0;
}
