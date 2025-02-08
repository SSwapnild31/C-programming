#include<stdio.h>

void main()
{
	int n1,n2,temp;
	printf("Enter two numbers\n");
	scanf("%d%d",&n1,&n2);
	printf("Before swapping n1=%d n2=%d\n",n1,n2);
	
	temp=n1;
	n1=n2;
	n2=temp;

	printf("After swapping n1=%d n2=%d\n",n1,n2);



}
