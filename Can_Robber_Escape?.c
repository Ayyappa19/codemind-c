#include<stdio.h>
int main()
{
    int x[20],i,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    {
        for(i=0;i<n;i++)
        {
            if(x[i]%2!=0)
            c++;
        }
        if(c<=2)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
}
