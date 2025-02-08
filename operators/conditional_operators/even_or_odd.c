#include<stdio.h>
void main()
{
	int num;
	printf("Enter an non zero number:\n");
	scanf("%d",&num);
	
	//num%2 ? printf("Odd num\n") : printf("Even num\n");
	
	num&1 ? printf("odd num\n") : printf("even num\n") ; 

}
