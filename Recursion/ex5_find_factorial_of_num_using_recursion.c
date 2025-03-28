#include<stdio.h>

int fact(int);
void main()
{
	int num;
	printf("Enter num : ");
	scanf("%d",&num);
	
	int f=fact(num);
	
	printf("factorial of %d is %d.\n",num,f);
}

int fact(int num)
{
	if(num)
		return num*fact(num-1);
	else
		return 1;
	
	/*static int f=1;
	if(num)
	{
		f=f*num;
		num--;
		fact(num);
	}
	return f;*/
}
