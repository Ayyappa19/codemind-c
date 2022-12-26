#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,c=0,k,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>-1;i--)
    {
        if(a[i]!=0)
       
       { 
           k=pow(2,c);
           sum=sum+k;
       }
        
        c+=1;
    }
    
    printf("%d",sum);
}