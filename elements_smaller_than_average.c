#include<stdio.h>
int main()
{
    int n,i,c=0;
    float sum=0,avg;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg>=a[i])
        c++;
    }
    printf("%d",c);
    
}
