#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    do
    {
        printf("%d
",n*n);
        scanf("%d",&n);
    }
    while(n!=-1);
}