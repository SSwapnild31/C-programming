//WAP to set 0th and 5th bit.

#include<stdio.h>
void main()
{
	int num;
	printf("Enter int num : ");
	scanf("%d",&num);
		
	num=num|1<<0;	//set 0th bit
	num=num|1<<5;	//set 5th bit
	
	printf("%d\n",num);

}
