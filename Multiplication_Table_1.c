#include<stdio.h>
int main()
{
    int a,n,i,j;
    scanf("%d",&a);
    for(i=1;i<=12;i++)
    {
        j=a*i;
        printf("%d x %d = %d
",a,i,j);
    }
}