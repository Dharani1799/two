#include <stdio.h>
void main()
{
    int sum=0,c=0,temp,rem;
    long int n;
	scanf("%ld",&n);
	while(n!=0)
	{
	    rem=n%10;
	    c++;
	    if(c==1)
	    {
	        sum=sum+rem;
	    }
	    n=n/10;
	}
	sum=sum+rem;
	printf("%d",sum);
}
