#include <stdio.h>

typedef union u_num
{
    char c_num;
    int i_num;
}un_num;


int main()
{
    un_num k;
    unsigned int n = 65536;
    unsigned char *pn = (char *)&n;
    printf("less\n");
    printf("%i\n", *pn);
    printf("%i\n", *(pn+1));
    printf("%i\n", *(pn+2));
    printf("%i\n", *(pn+3));
    printf("more\n");
    printf("less\n");
    printf("%i\n", pn[0]);
    printf("%i\n", pn[1]);
    printf("%i\n", pn[2]);
    printf("%i\n", pn[3]);
    printf("more\n");
    
    
    unsigned short *ps = (short *)&n;
    printf("less\n");
    printf("%i\n",*ps);
    printf("%i\n",*(ps+1));
    printf("more\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("char = %i\n",sizeof(char));
    printf("short = %i\n",sizeof(short));
    printf("int =%i\n",sizeof(int));
    printf("float = %i\n",sizeof(float));
    printf("double = %i\n",sizeof(double));
    printf("void = %i\n",sizeof(void));
    printf("un_num = %i\n",sizeof(un_num));
    printf("puntero = %i\n",sizeof(void *));
    
    printf("\n");
    printf("\n");
    double nd = 1;
    pn = (char *)&nd;
    printf("%i\n", *(pn));
    printf("%i\n", *(pn+1));
    printf("%i\n", *(pn+2));
    printf("%i\n", *(pn+3));
    printf("%i\n", *(pn+4));
    printf("%i\n", *(pn+5));
    printf("%i\n", *(pn+6));
    printf("%i\n", *(pn+7));
    

    k.c_num = 10;
    
    printf("%i\n",k.c_num);
    printf("%i\n",k.i_num);
    printf("\n");
    printf("\n");

    pn = (char *)&k;
    printf("%i\n", *(pn));
    printf("%i\n", *(pn+1));
    printf("%i\n", *(pn+2));
    printf("%i\n", *(pn+3));
    getchar();
    return 0;
}
