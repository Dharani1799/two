#include<stdio.h>
#include<string.h>
void main() 
{
    char s[10];
    int i,j,n;
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	    if(s[i]==s[j])
	    {
	        printf("yes..has repeating characters");
	        break;	   
	    }
	    }
	    break;
	}
}
