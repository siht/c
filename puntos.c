#include <stdio.h>

int goo(int param)
{
    int *p = &param;
    printf("direccion de param en goo= %i\n", (int)p);
    p = &p;
    printf("direccion de p en goo= %i\n", (int)p);
    return 8;
}

int foo(int uno)
{
    int a = 0;
    int *p = &a;
    printf("direccion de a en foo= %i\n", (int)p);
    p = &uno;
    printf("direccion de uno en foo= %i\n", (int)p);
    p--;
    printf("uno -4 = %i\n", p);
    printf("direccion de retorno= %i\n", (int)*p);
    p--;
    printf("uno -8 = %i\n", p);
    printf("direccion en ebp= %i\n", (int)*p);
    goo(0);
    return 99;
}

int main()
{
    int var = 0;
    int var1 = 0;
    int var2 = 0;
    int *point = &var;
    char *one = "direccion de var = %i\n";
    char *two = "direccion de var1 = %i\n";
    char *three = "direccion de var2 = %i\n";
    char *four = "direccion de point = %i\n";
    char *five = "direccion de foo = %i\n";
    char *six = "direccion de main = %i\n";
    char *aux = "direccion de cadena %i = %d\n";
    int *afuera = malloc(sizeof(int)*10);
    printf(one, (int)point);
    point = &var1;
    printf(two, (int)point);
    point = &var2;
    printf(three, (int)point);
    point = &point;
    printf(four, (int)point);
    int (*pf)(int) = &foo;
    printf(five, (int)pf);
    int (*pm)() = &main;
    printf(six, (int)pm);
    printf(aux, 1, one);
    printf(aux, 2, two);
    printf(aux, 3, three);
    printf(aux, 4, four);
    printf(aux, 5, five);
    printf(aux, 6, six);
    printf(aux, 7, aux);
    foo(0);
    goo(0);
    printf("afuera = %i\n", afuera);
    getch();
    return 0;
}
