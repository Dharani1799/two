#include <stdio.h>
void main()
{
	int a[10],i,j,n,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0,j=i+1;i<n-1,j<n;i+=2,j+=2)
	{
	    t=a[i];
	    a[i]=a[j];
	    a[j]=t;
	}
	for(i=0;i<n;i++)
	{
	    printf("%d ",a[i]);
	}
}
