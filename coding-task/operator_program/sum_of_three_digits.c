#include<stdio.h>
void main()
{
	int num,rem1,rem2;
	printf("Enter three digit num : \n");
	scanf("%d",&num);
	rem1 = num % 10;
	num = num / 10;
	rem2 = num % 10;
	num = num / 10;

	printf("%d\n",rem1+rem2+num);

	



}
