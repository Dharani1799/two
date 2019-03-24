#include <stdio.h>

void main()
{
    int i,j,k,l=0,m,n;
    printf("Input :\n");
    scanf("%d",&n);
    printf("Output :\n");
    i=1;
    while(n)
    {
        k=n%10;
        n=n/10;
        l=l+(k*i);
        i=i*2;
    }
    i=1;n=0;
     while(l)
    {
        k=l%8;
        l=l/8;
        n=n+(k*i);
        i=i*10;
    }
printf("%d",n);

}
