#include<stdio.h>
int main()
{
    int a,n,i,j;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        j=i*a;
        printf("%d x %d = %d
",a,i,j);
    }
}