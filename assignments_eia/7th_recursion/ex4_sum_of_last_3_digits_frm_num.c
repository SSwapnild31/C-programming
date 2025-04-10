#include<stdio.h>

int rec_fun_sum(int);
void main()
{
	int num;
	printf("enter num : ");
	scanf("%d",&num);

	int sum=rec_fun_sum(num);
	printf("sum=%d\n",sum);
}

int rec_fun_sum(int num)
{
	static int c;
	if(num==0)
		return 0;
	int r=num%10;
	if(c<3)
	{
		c++;
		return r+rec_fun_sum(num/10);
	}
	else
		return 0;
}                
