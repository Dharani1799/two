#include <stdio.h>

void main()
{
	int n,i,k,s=0;
	scanf("%d %d",&n,&k);
	for(i=n;i<=k;i++)
	{
	    if(i%2==1)
	    {
	       s=s+i;
	    }
	}
	 printf("%d",s);
}
