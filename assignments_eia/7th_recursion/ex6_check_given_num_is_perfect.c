#include<stdio.h>

int rec_fun_perfect(int);
int rec_fun_help(int,int);
void main()
{
	int num;
	printf("Enter num  : ");
	scanf("%d",&num);
	
	int per=rec_fun_perfect(num);
	if(num==per)
		printf("%d is perfect\n",num);
	else
		printf("%d not perfect..!\n",num);
}

int rec_fun_perfect(int num)
{
	return rec_fun_help(num,1);
}

int rec_fun_help(int num,int fact)
{
	if(num==fact)
		return 0;
	if(num%fact==0)
		return fact+rec_fun_help(num,fact+1);
	return rec_fun_help(num,fact+1);
}
