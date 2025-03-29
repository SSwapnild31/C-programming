#include<stdio.h>

int fact(int);
void main()
{
	int num;
	printf("Enter num : ");
	scanf("%d",&num);
	int f=fact(num);
	printf("fact of %d is %d \n",num,f);
}

int fact(int num)
{
	if(num)
		return num*fact(num-1);
	else
		return 1;
}
