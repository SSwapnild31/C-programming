#include<stdio.h>

void main()
{
	int num;
	printf("Enter an number...\n");
	scanf("%d",&num);
	printf("Original number=%d\n",num);
	
	num=num/10;
	
	printf("After deletion of last digit=%d\n",num);

}
