#include<stdio.h>
int main()
{
    int e,m,p,ch,c;
    scanf("%d%d%d%d%d",&e,&m,&ch,&p,&c);
    if (e>=35 && m>=35 && ch>=35 && p>=35 && c>=35)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}