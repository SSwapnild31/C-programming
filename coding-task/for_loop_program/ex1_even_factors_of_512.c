#include<stdio.h>
void main()
{
	int num=512;
	printf("Even factors of 512 : ");
	for(int i=1;i<=num;i++)
	{
		if(num%i==0 && i%2==0)
		printf("%d ",i);
	}
	printf("\n");
}	
