#include<stdio.h>
int main()
{
	    int i=1,n,s=0;
	    printf("enter any value\n");
	    scanf("%d",&n);
	    while(i<=n)
		{
	     s=s+(i*i);
	     i=i+1;
		}
		printf("%d",s);
}
