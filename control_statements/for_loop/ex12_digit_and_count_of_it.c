#include<stdio.h>
void main()
{
	int num=12345,r,c=0;
	printf("Original number is : %d\n",num);
	printf("Digits are : ");
	for( ; num ; num=num/10)
	{
		c++;
		r = num % 10;
		printf("%d ",r);
	}
	printf("\ncount of number is : %d\n",c);
}
