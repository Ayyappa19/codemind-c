#include<stdio.h>
int main()
{
	int n,i,j,x,y;
	scanf("%d",&n);
	int a[n];

	for(i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
		
			if(a[j]<a[j+1])
			{
				x=a[j];
				y=a[j+1];
				a[j]=y;
				a[j+1]=x;
			}
	    }
	   
		printf("%d ",a[j]);
	}
}