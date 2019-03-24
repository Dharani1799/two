#include <stdio.h>

void main()
{
 long int n,s=0,rem,base=1;
scanf("%ld",&n);
while(n)
{
    rem=n%10;
    s=s+rem*base;
    base=base*2;
    n=n/10;
    
    
}

printf("%lx",s);

}
