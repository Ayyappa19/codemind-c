#include<stdio.h>
int main()
{
    int n,rev=0,r,p;
    scanf("%d",&n);
    p=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==p)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}