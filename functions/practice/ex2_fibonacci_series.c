#include<stdio.h>

void fibon(int);
void main()
{
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	
	fibon(n);
	printf("\n");
}

void fibon(int n)
{
	int a=1,b=0,c=0;
	while(n)
	{
		printf("%d ",c);
		c=a+b;
		a=b;
		b=c;
		if(c>10)	
			break;	
	}
}
