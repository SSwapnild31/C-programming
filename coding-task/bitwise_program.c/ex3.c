//WAP to clear 3rd and 2nd bit.

#include<stdio.h>
void main()
{
	int num;
	printf("Enter int num : ");
	scanf("%d",&num);
	
	num = num & ~(1<<3);		//clear the 3rd bit
	num = num & ~(1<<2);		//clear the 2nd bit
	
	printf("%d\n",num);
}
