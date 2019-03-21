#include <stdio.h>
void main() 
{
    int n,a[10],i,j,c=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	   if(a[i]<a[i+1])
	   {
	        c++;
	   }
	   else
	   {
	       break;
	   }
	}
	printf("%d",c);
}
