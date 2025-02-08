#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter values of a and b : \n");
	scanf("%d %d",&a,&b);
	
	printf("%d\n",3*a*b*b+a*a*a+3*b*a*a+b*b*b);
}
