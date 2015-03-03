#include <stdio.h>

int str_len(const char *cad);
int in(char let, const char *cad);

int main()
{
    char *TODO="wuiolxvmMVXHAOIUYTW ";;
    char *cad = "ANITA LAVA LA TINA";
    printf("%i\n", str_len(cad));
    char *rev;
    rev = (char *)malloc(sizeof(char)*(str_len(cad)+1));
    char i,j;
    j = 0;
    for(i = (char)str_len(cad) - 1; i>=0; i--)
    {
        rev[j++] = in(cad[i], TODO) ? cad[i]:'*';
    }
    rev[j] = '\0';
    printf("%s", rev);
    free(rev);
    getchar();
    return 0;
}

int str_len(const char *cad)
{
    char *aux = cad;
    while(*aux)
        aux++;
    return aux-cad;
}

int in(char let, const char *cad)
{
    char *aux = cad;
    while(*aux)
    {
        if( *(aux++) == let)
            return 1;
    }
    return 0;
}
