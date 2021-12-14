#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,d,x,y;
	scanf("%d %d %d",&a,&b,&c);
	d=b*b-4*a*c;
	switch(d>0)
       {
       	case 1:printf("roots are real and different");
       	break;
       	case 0:switch(d<0)
       	{
       	case 1:printf("roots are imaginary");
       	break;
       	case 0:printf("roots are real and equal");
       	break;	
		}
	}
              x=(-b+sqrt(d))/(2*a);
		y=(-b-sqrt(d))/(2*a);
		printf("the roots are %d %d",x,y);
}

