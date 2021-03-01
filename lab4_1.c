#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int r[n][3];
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&r[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",r[i][j]);
            printf("\n");
    }
}
