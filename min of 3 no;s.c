#include<stdio.h>
int main()
{
	int a,b,c,minimum;
	printf("enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if((a<b)&&(a<c))
	{
		minimum=a;
	}
	else if((a<c)&&(b<a))
	{
		minimum=b;
	}
	else if((c<a)&&(c<b))
	{
		minimum=c;
	}
	printf("minimum amomg all the three numbers=%d",minimum);
}
