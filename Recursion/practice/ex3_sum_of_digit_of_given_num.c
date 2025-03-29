#include<stdio.h>

int digitSum(int);
void main()
{
	int num;
	printf("Enter number having more than 2 digits : ");
	scanf("%d",&num);
	
	int sum=digitSum(num);
	printf("sum = %d\n",sum);
}

int digitSum(int num)
{
	static int sum;
	if(num)
	{
		sum+=num%10;
		digitSum(num/10);
	}
	else
		return sum;

	/*int r;
	if(num)
	{
		r=num%10;
		
		return r+digitSum(num/10);
	}
	else
		return num;*/
}
