#include<stdio.h>
main()
{
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
       if(a+b+c==180)
       {
       	printf("these angles form triangle");
	}
	else
	{
		printf("these angles donot form triangle");
	}	
}
