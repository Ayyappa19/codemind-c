#include<stdio.h>
int main()
{
    int i,c=0,j,n,k=0,d,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=i*i;
        c=c+j;
        
    }
    for(i=1;i<=n;i++)
    {
      k=k+i;
      l=k*k;
    }
    d=l-c;
    printf("%d",d);
    
}