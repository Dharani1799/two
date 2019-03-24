#include<stdio.h>
void main()
{
    int d,b,r,i=0;
    scanf("%d",&d);
    while(d)
    {
        r=d%10;
        d=d/10;
        b=b+(i*r);
        i=i*2;
    }
    printf("%d",b);
}
