#include <stdio.h>

int main()
{
    unsigned long v = 0xffff;
    unsigned char m1 = 0xff;
    unsigned short m2 = 0xffff;
    unsigned int m3 = 0xffffffff;
    unsigned long m4 = 0xffffffffffffffff;
    printf("%i\n", m1);
    printf("%i\n", m2 >> 16);
    printf("%i\n", m3 >> 32);
    printf("%i\n", m4 >> 64);
    getchar();
    return 0;
}
