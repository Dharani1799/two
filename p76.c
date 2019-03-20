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
	  if(a[i]%2==0)
	  {
	      c++;
	  }
	  else if(c>1)
	  {
	      if(a[i]%2!=0)
	      {
	          printf("%d",a[i]);
	          break;
	      }
	  }
	}  
	for(i=0;i<n;i++)
	{
	    if(a[i]%2==1)
	    {
	        c++;
	    }
	    else if(c>1)
	    {
	        if(a[i]%2!=1)
	        {
	            printf("%d",a[i]);
	            break;
	        }
	    }
	}          
}
