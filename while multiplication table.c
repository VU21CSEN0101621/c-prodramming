#include<stdio.h>
main()
{
	int n,i=1,p;
	scanf("%d",&n);
	while(i<=10)
	{
		p=i*n;
		printf("%d*%d=%d\n",n,i,p);
		i++;
	}
}
