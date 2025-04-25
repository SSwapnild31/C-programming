#include<stdio.h>

int per_num(int);
int help_rec(int,int);
void main()
{
	int num;
	printf("Enter num : ");
	scanf("%d",&num);
	
	int per=per_num(num);
	if(num==per)
		printf("%d is perfect\n",num);
	else
		printf("%d not perfect\n",num);
}

int per_num(int num)
{
	return help_rec(num,1);
}

int help_rec(int num, int i)
{
	if(i==num)
		return 0;
	if(num%i==0)
		return i+help_rec(num,i+1);
	return help_rec(num,i+1);
}
