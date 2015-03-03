#include <stdio.h>

int ret(int t)
{
    static int i;
    if(!t)
    {
        i = 1;
    }
    if(t)
    {
        i++;
    }
    return i;
}

int ret2()
{
    static int i = 100;
    return i++;
}

int main()
{
    printf("%i\n",ret2());
    printf("%i\n",ret2());
    printf("%i\n",ret2());
    printf("%i\n",ret2());
    printf("%i\n",ret2());
    printf("%i\n",ret2());
    getchar();
    return 0;
}
