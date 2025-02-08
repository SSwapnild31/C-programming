#include<stdio.h>

void main()
{
	int num,n1,n2;
	printf("Enter an number...\n");
	scanf("%d",&num);
	
	printf("Before swap=%d\n",num);
	
	n1=num%10;
	num=num/10;
	n2=num%10;
	num=num/10;
	
	num=num*10+n1;	
	num=num*10+n2;
	
	printf("Before swap=%d\n",num);
}

