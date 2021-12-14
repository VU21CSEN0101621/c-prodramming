#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	switch (a>0)
	{
		case 1:printf("a is postive");
		break;
		case 0:switch (a<0)
		{
			case 1:printf("a is negative");
			break;
			case 0:printf("a is zero");
			break;
		}
	}
}	
	
