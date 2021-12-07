#include<stdio.h>
main()
{
	float bas,gros,hra,da;
	printf("enter basic salary of an employee");
	scanf("%f",&bas);
	if(bas<=10000)
	{
		da=bas*0.8;
		hra=bas*0.2;
	}
	else if(bas<=20000)
	{
		da=bas*0.9;
		hra=bas*0.25;
	}
	else
	{
		da=bas*0.95;
		hra=bas*0.3;
	}
	gros=bas+hra+da;
	printf("gross salary of employee=%.2f",gros);
}
