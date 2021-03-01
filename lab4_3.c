#include <stdio.h>
#include <string.h>
int main()
{
    char in[200],out[50];
    int i,j,n,c;
    scanf("%[^\n]s",in);
    n=strlen(in);
    out[0]=in[0];
    for(i=0;i<n;i++)
    {
     c=strcmp(in[i+1],out[i]);
     printf("%d",c);
     if(c!=0)
     out[i+1]=in[i+1];
    }
    puts(out);
}
