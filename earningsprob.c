#include<stdio.h>
main()
{
	int weekhrs;
	float hourrate,earnings;
	scanf("%d %f",&weekhrs,&hourrate);
	if(weekhrs<=40)
	{
		earnings=weekhrs*hourrate;
	}
	else
	{
		earnings=weekhrs*hourrate+(weekhrs-40)*hourrate*1.5;
	}
	printf("the earnings are %f",earnings);
}
	
