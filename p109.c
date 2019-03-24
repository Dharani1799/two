#include <stdio.h>
#include<string.h>
void main()
{
    int n,a[10],i,j,sum=0,b[10];
	scanf("%d",&n);
	int k=n-1;                      
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
    for(i=n-1;i>=0;i--)
    {
        sum=sum+a[i];
        b[k]=sum;
        k--;                    
    }
    for(i=0;i<n;i++)                
    {
        printf("%d ",b[i]);
    }
}
