#include<stdio.h>
int main()
{
    int i,n,m;
    scanf("%d%d",&m,&n);
    for(i=n;i>=m;i--)
    {
        printf("%d ",i);
    }
}