#include<stdio.h>
void main()
{
	printf("factors of 12 are : ");
	for(int i=1;i<=12;i++)
	{
		if(12%i==0)
		 printf("%d ",i);
	}
	printf("\n");
}
