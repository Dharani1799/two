#include <stdio.h>
void main()
{
    int i,j,k,l,m,n,a[1000];
    printf("Input:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
printf("Output:\n");
for(i=0;i<n-1;i++)
{
    if(a[i+1]>a[i])
    {
        m=m+a[i+1];
        
    }
    else
    m=m+a[i];
}
printf("%d",m);
}
