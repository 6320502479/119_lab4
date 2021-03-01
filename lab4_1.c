#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int r[n][3],p[n],p3[n-2];
    p[0]=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&r[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        p[i]=r[i][0]*4+r[i][1]*2+r[i][2]*1;
    }
    int max=0,min;
    for(i=0;i<n-2;i++)
    {
        p3[i]=p[i]+p[i+1]+p[i+2];
        printf("%d ",p3[i]);
    }
    for(i=0;i<n-2;i++)
    {
        if(max<p3[i])
            max=i+1;
    }
    printf("%d %d",max,min);

}
