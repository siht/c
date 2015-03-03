#include <stdio.h>

int bit_length(int n)
{
    int l = 0;
    while(n >> l++ > 1);
    return l;
}

int py_bit_length(int n)
{
    if (!n)
       return 0;
    if (n < 0)
       n *= -1;
    int l = 0;
    while(n >> l++ > 1);
    return l;
}

int another_bit_length(int n)
{
    if (n < 0)
       n *= -1;
    int l = 0;
    while(n >> l++ > 1);
    return l;
}

int main()
{
    /*printf("%i", bit_length(0));*/
    printf("%i", py_bit_length(10));
    /*printf("%i", another_bit_length(0));*/
    getchar();
    return 0;
}
