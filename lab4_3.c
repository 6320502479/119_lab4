#include <stdio.h>
#include <string.h>
int main()
{
    char in[200],out[50];
    int i,j=1,n,c;
    scanf("%[^\n]s",in);
    out[0]=in[0];
    n=strlen(in);
    for(i=0;i<n;i++)
    {
     if(in[i]== '\0')
        break;
     if(in[i]!=in[i+1])
     {
      out[j]=in[i+1];
      j++;
     }
    }
    printf("%s",out);
}

