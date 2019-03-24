#include <stdio.h>
void main()
{
    int n,p,k,ar[100],i=0,j,rem,count=0,count1=0,c=1,a[100];
	scanf("%d %d %d",&n,&p,&k);
	while(n!=0)
	{
	    rem=n%10;
	    ar[i]=rem;
	    i++;
	    count++;
	    n=n/10;
	}
	for(i=count-1;i>=0;i--)
    {
        a[c]=ar[i];
        c++;
        count1++;
    }
    for(j=1;j<=count1;j++)
    {
        if(p==j)
        {
            printf("%d",a[p+k]);
        }
    }
}
