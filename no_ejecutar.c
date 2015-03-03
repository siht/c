#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int array[] = {9,8,7};
    int gordo = 666;
    int a,b,c,d;
    b = a = 0;
    b = 1;
    c = 2;
    d = c +b;
    char z,x,y,w;
    z=x=y=0;
    w=0;
    y=1;
    register g;
    --d;
    ++d;
    char* cadena = "hello, hello, remember me";
    int* puntero = array;
    argc--;
    while(argc > -1)
        printf("%s\n",argv[argc--]);
    printf("%i %i %i %i %s\n", a, b, c, d, cadena);  
    printf("%i\n",*puntero);
    printf("%i\n",*(puntero+1));
    printf("%i\n",*(puntero+2));
    printf("%i\n",*(puntero-1));
    printf("%i\n",*(puntero-2));
    printf("%i\n",*(puntero-3));
    printf("%i\n",*(puntero-4));
    printf("%i\n",*(puntero-5));
    printf("%i\n",*(puntero-6));
    system("PAUSE");
    while(1)
    {
        __asm__ __volatile__("pushl $666;");
    }
    return 0;
}
