#include<stdio.h>
void main()
{
	int num,r1,r2;
	printf("Enter an number : \n");
	scanf("%d",&num);
	r1 = num % 10;
	num = num / 10;
	r2 = num % 10;
	num = num / 10;

	printf("%d\n",num * 10 + r1);
}
