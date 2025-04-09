#include<stdio.h>

int rec_fun_sum(int);
int main()
{
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	
	int sum=rec_fun_sum(num);
	
	printf("sum : %d\n",sum);
	
	return 0;
}

int rec_fun_sum(int num)
{
	if(num==0)
		return 0;
	
	int r=num%10;
	
	if(r%2==0)
		return r+rec_fun_sum(num/10);
	else
		return rec_fun_sum(num/10);
}	
