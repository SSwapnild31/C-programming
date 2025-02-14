#include<stdio.h>
void main()
{
	int num,r;
	printf("Enter number : ");
	scanf("%d",&num);
	
	r=num%10;
	num=num/10;
	r=num%10;
	num=num/10;
	printf("num : %d\n",num);
}
