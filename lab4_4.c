#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,n;
    char in[1000],out[20],ignor[10][5] = {"i", "of", "at", "with", "for", "the", "on", "a", "an", "in"};
    gets(in);
    n=strlen(in);
    for(i=0;i<n;i++)
    {
        if(in[i+1]==" ");
        {
            out[i]=in[i+2];
        }
    }
    puts(out);

}
