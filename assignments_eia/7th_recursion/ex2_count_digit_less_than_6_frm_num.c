#include<stdio.h>

int rec_fun_count(int);

int main()
{
	int num;
	printf("Enter num : ");
	scanf("%d",&num);
	
	int count=rec_fun_count(num);
	
	printf("count : %d\n",count);
}

int rec_fun_count(int num)
{
	if(num==0)
		return 0;
	
	int r=num%10;
	if(r<6)
		return 1+rec_fun_count(num/10);
	else
		return rec_fun_count(num/10);
}
