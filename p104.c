#include <stdio.h>
void main()
{
	int a[10],n,s=0,i,j;
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=i+1;i<n,j<n;i++,j++)
    {
        s=s+a[i]+a[j];
    }
    printf("%d",s);

}
