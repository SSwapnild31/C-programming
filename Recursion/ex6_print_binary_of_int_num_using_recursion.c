#include<stdio.h>

void binary_print(int);
void main()
{
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	
	binary_print(num);
	printf("\n");
}

void binary_print(int num)
{
	static int pos=31;
	if(pos>0)
	{
		printf("%d",num>>pos&1);
		pos--;
		binary_print(num);
	}
	else
		pos=31;		//reset pos to 31 for printing another binary
}
