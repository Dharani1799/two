#include <stdio.h>
void main() 
{
    int s,a[10],i,j;
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<s;i++)
	{
	   if(a[i]>a[i+1])
	   {
	       printf("%d",a[i]);
	       break;
	   }
	}
}
