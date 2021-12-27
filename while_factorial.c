#include<stdio.h>
int main()
{
	    int i=1,n,f=1;
	    printf("enter any value\n");
	    scanf("%d",&n);
	    while(i<=n)
		{
	     f=f*i;
	     i=i+1;
		}
		printf("%d",f);
}
