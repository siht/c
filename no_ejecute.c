#include <stdio.h>

int main()
{
    
    int ebp = 0, esp = 0;
    int eax=0, ebx=0, ecx=0, edx=0;
    
    __asm__ volatile(
    "movl (%%ebp), %%eax\n"
    "movl (%%esp), %%ebx\n"
    "movl (%%eax), %%ecx\n"
    "movl (%%ebx), %%edx\n"
    :
    "=a"(ebp),
    "=b"(esp),
    "=c"(eax),
    "=d"(ebx)
    );
    __asm__ volatile(
    "movl (%%ecx), %%eax\n"
    "movl (%%edx), %%ebx\n"
    :
    "=a"(ecx),
    "=b"(edx)
    );
    printf("ebp esta en %i\n", ebp);
    printf("contiene %i\n", *((int *) ebp));
    printf("esp esta en %i\n", esp);
    printf("contiene %i\n", *((int *) esp));
    printf("eax esta en %i\n", eax);
    printf("contiene %i\n", *((int *) eax));
    printf("ebx esta en %i\n", ebx);
    printf("contiene %i\n", *((int *) ebx));
    printf("ecx esta en %i\n", ecx);
    printf("contiene %i\n", *((int *) ecx));
    printf("edx esta en %i\n", edx);
    printf("contiene %i\n", *((int *) edx));
    getchar();
    return 0;
}
