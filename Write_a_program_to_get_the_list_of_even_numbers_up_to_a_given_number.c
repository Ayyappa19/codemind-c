#include<stdio.h>
int main()
{
    int i,n,m;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}