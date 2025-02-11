#include<stdio.h>
void main()
{
	int num,i,c=20;
	printf("Enter an number : \n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		if(num%2==0)
		c++;
	}
	if(c==2)
	printf("Prime..\n");
	else
	printf("not prime..!\n");

}
