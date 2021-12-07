#include<stdio.h>
main()
{
	float cp,sp,p,l;
	scanf("%f %f",&cp,&sp);
       if(sp>cp)
       {
       	p=sp-cp;
       	printf("profit is %f",p);
	}
	else
	{
		l=cp-sp;
		printf("loss is %f",l);
	}
		
}
