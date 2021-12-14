#include<stdio.h>
main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	switch(a>b)
	{
		case 1:printf("a is max");
		break;
		case 0:printf("b is max");
		break;
		default:printf("both are equal");
	}	
}
