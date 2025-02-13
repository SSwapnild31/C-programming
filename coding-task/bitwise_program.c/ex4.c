//Write a Program in C to toggle 1st and 4th bit .
//i/p: int n= 42 o/p: 56


#include<stdio.h>
void main()
{
	int num;
	printf("Enter an number : ");
	scanf("%d",&num);
	
	num=num^1<<1;
	num=num^1<<4;
	
	printf("%d\n",num);
}
