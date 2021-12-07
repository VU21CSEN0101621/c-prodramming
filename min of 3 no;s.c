#include<stdio.h>
int main()
{
	int x,b,c,minimum;
	printf("enter three numbers:");
	scanf("%d%d%d",&x,&b,&c);
	if((x<b)&&(x<c))
	{
		minimum=x;
	}
	else if((b<c)&&(b<x))
	{
		minimum=b;
	}
	else if((c<x)&&(c<b))
	{
		minimum=c;
	}
	printf("minimum amomg all the three numbers=%d",minimum);
}
