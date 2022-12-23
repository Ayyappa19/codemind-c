#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j=0,k=0,x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            j=j+a[i];
        }
        else
        {
            k=k+a[i];
        }
    }
    x=abs(j-k);
    printf("%d",x);
}