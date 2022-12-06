#include<stdio.h>
int main()
{
    int x,a,b,d;
    scanf("%d%d%d",&x,&a,&b);
    d=1*a+2*b;
    if(d>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}