#include<stdio.h>

int rec_fun_rev(int);
int rev_fun_help(int ,int);
void main()
{
	int num;
	printf("Enter num : ");
	scanf("%d",&num);
	
	int rev=rec_fun_rev(num);
	
	printf("rev=%d\n",rev);
}

int rec_fun_rev(int num)
{
	return rev_fun_help(num,0);
}

int rev_fun_help(int num,int rev)
{
	if(num==0)
		return rev;
	return rev_fun_help(num/10,rev*10+num%10);
}
