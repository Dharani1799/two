#include <stdio.h>
#include<string.h>
void main()
{
    int n,a[10],i,j,s=0,s1=0,b[10],c[10],res[10];
	scanf("%d",&n);
	int k=0,l=n-1;                     
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)            
	{
	    s=s+a[i];
	    b[k]=s;
	    k++;
	}
    for(i=n-1;i>=0;i--)
    {
        s1=s1+a[i];
        c[l]=s1;
        l--;                        
    }
    for(i=0,j=0;i<n,j<n;i++,j++)               
    {
        if(n>1)
        {
        res[i]=b[i]+c[j];
        }
        else
        {
            res[i]=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",res[i]);
    }
}
