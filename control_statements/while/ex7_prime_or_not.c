#include<stdio.h>
void main()
{
	int num,r;
	printf("Enter number : ");
	scanf("%d",&num);
	
	int i=2;
	while(i<num)
	{
		if(num%i==0)
			break;
		i++;
	}
	if(num==i)
		printf("prime\n");
	else
		printf("not prime\n");
}
