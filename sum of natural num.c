#include<stdio.h>  
main()    
{    
    int i=1,n,c=0;
    scanf("%d",&n);
    while(i<=n)
	{ 
        c=c+i;
        i++;
    }
    printf("sum=%d",c);  
}
