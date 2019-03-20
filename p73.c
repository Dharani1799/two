#include <stdio.h>
void main() 
{
    int n,a[10],i,j,p;
	scanf("%d %d",&n,&p);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	   if(a[i]-a[i+1]==p)
	   {
	       printf("%d",a[i]);
	       break;
	   }
	}
}
