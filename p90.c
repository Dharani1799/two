#include <stdio.h>
void main()
{
	int n,k,r=1,d=1,a,i;
	scanf("%d %d",&n,&k);
	if(n>=k)
	{
	for(i=1;i<=k;i++)
	{
	    r=r*n;
	    d=d*i;
	    n--;
	}
	a=r/d;
	printf("%d",a);
	}
	else
	{
	    printf("not valid ");
	}
}
