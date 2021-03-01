#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main()
{
    int i,j,k,n;
    char *p,in[1000],out[20],ignor[10][5] = {"i", "of", "at", "with", "for", "the", "on", "a", "an", "in"};
    gets(in);
    n=strlen(in);
    p=strtok(in," ");
     while (p != '\0')
    {
        for (j=0 ; j < 10; j++)
        {
            if (strcmp(p, ignor[j]))
                k++;
        }
        if (k == 10 || i == 0)
        {
            printf("%c", toupper(p[0]));
        }
        p = strtok('\0'," ");
        i++, k = 0;
    }
}


