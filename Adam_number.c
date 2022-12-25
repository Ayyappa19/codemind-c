#include<stdio.h>
int main()
{
    int n,r,rev=0,i,j=0,k,p,s;
    scanf("%d",&n);
    p=n*n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    s=rev*rev;
    while(s>0)
    {
        i=s%10;
        j=j*10+i;
        s=s/10;
    }
    if(p==j)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}