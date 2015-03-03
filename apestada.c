#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static FILE *alchemy;
static FILE *chemistry;

static char *comando2 = "dir c:\\";

static char *comando = "echo ";

char res[10000];
char aux[50];
char aux2[10000];

int main()
{
    alchemy = popen(comando2, "r");
    while( fscanf( alchemy , "%s", aux) > 0)
    {
        strcat( res, aux );
        strcat( res, " " );
    }
    pclose( alchemy );
    strcat(aux2, comando);
    strcat(aux2, "\"");
    strcat(aux2, res);
    strcat(aux2, "\"");
    chemistry = popen(aux2, "w");
    pclose( chemistry );
    getchar();
    return 0;
}
