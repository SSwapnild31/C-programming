#include<stdio.h>
void main()
{
	int num,i;
	printf("Enter number : ");
	scanf("%d",&num);
	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		 break;
	}
	if(num==i)
	 printf("Number is prime\n");
	else
	 printf("Number is not prime\n");
}
