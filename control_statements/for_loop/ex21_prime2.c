#include<stdio.h>
void main()
{
	int num,i,c=0;
	printf("Enter an number : \n");
	scanf("%d",&num);
	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		c++;
	}
	if(c==0)
	printf("prime..\n");
	else
	printf("not prime..\n");
}
