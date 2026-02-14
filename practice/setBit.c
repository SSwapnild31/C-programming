#include<stdio.h>

int main()
{
	int num, pos;
	printf("Enter number : ");
	scanf("%d",&num);
	printf("Enter position : ");
	scanf("%d",&pos);

	num = num | 1 << pos;
	
	printf("after set : %d\n",num);
	return 0;
}
