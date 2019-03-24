#include <stdio.h>
void main()
{
	int n,k,r=1,i;
	scanf("%d %d",&n,&k);
	if(n>=k)
	{
	for(i=0;i<k;i++)
	{
	    r=r*n;
	    n--;
	}
	printf("%d",r);
	}
	else
	{
	    printf("not valid input");
	}
}
