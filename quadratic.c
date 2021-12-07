#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	float x,y,imaginary;
	float Discrim;
	printf("enter values of a,b,c of quadratic equation(a*x*x+b*x+c):");
	scanf("%f%f%f",&a,&b,&c);
	Discrim=(b*b)-(4*a*c);
	if(Discrim>0)
	{
		x=(-b+sqrt(Discrim))/(2*a);
		y=(-b-sqrt(Discrim))/(2*a);
		printf("two distant and real roots exists:%.2f and %.2f",x,y);
	}
	else if(Discrim==0)
	{
		x=y=-b/(2*a);
		printf("two equal and real roots exists:%.2f and %.2f",x,y);
	}
	else if(Discrim<0)
	{
		x=y=-b/(2*a);
		imaginary=sqrt(Discrim)/(2*a);
		printf("two distinct complex roots exists:%.2f+i%.2f and %.2f-i%.2f",x,y,imaginary);
	}
	return 0;
}
