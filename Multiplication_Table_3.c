#include<stdio.h>
int main()
{
    int n,a,b,i,k;
    scanf("%d%d%d",&n,&a,&b);
    for(i=a;i<=b;i++)
    {
        k=n*i;
        printf("%d x %d = %d
",n,i,k);
    }
}