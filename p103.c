#include <stdio.h>
void main()
{
    int i,j,k,l,m,n,a[1000];
    printf("Input:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
printf("Output:\n");
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
{
    if(a[j]>a[i])
    {
        m=a[i];
        a[i]=a[j];
        a[j]=m;
        
    }
    
}
}
if(n>2)
{
j=n-1/(n-2);
m=a[n-1];
a[n-1]=a[j];
a[j]=m;
}

for(i=0;i<n-1;i++)
{
    if(a[i+1]>a[i])
    {
        l=l+a[i+1];
    }
    else if(a[i]>a[i+1])
    l=l+a[i];
}
printf("%d",l);
}
