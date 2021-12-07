#include<stdio.h>
main()
{
	int tel,eng,math,phy,vedc;
	float per;
	printf("enter the five subject marks:");
	scanf("%d %d %d %d %d",&tel,&eng,&math,&phy,&vedc);
	per=(tel+eng+math+phy+vedc)/5.0;
	printf("percentage=%.2f\n",per);
	if(per>=90)
	{
		printf("grade A");
	}
	else if(per>=80)
	{
		printf("grade B");
	}
	else if(per>=70)
	{
		printf("grade C");
	}
	else if(per>=40)
	{
		printf("grade D");
	}
	else if(per<40)
	{
		printf("grade E");
	}
	else
	{
		printf("grade F");
	}
}
