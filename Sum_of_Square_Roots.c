#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i;
    float j,sum=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        j=sqrt(i);
        sum=sum+j;
    }
    printf("%0.2f",sum);
}