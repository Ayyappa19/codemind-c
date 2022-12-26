#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,k,x,r,c=0,z,l;
    scanf("%d",&n);
    
        k=n*n;
        int q=k;
        while(k>0)
        {
            r=k%10;
            c++;
            k=k/10;
        }
        l=c/2;
        x=pow(10,l);
        z=q%x;
        if(z==n)
        printf("Automorphic Number");
        else
        printf("Not an Automorphic Number");
    }
