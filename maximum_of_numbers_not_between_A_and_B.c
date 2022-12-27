#include<stdio.h> 
int main()
{
    int n,i,x,y,z,max=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&x,&y);
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    if(max<x||max>y)
    printf("%d",max);
    else
    printf("-1");
}