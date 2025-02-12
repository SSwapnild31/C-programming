#include<stdio.h>
void main()
{
	int num;
	printf("Enter int number : \n");
	scanf("%d",&num);
	
	int i,sum=0;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
			sum = sum + i;
	}
	if(num==sum)
	printf("perfect number..\n");
	else 
	printf("not perfect number..!\n");
}
