#include<stdio.h>
void main()
{
	int num=900;
	printf("All odd factors of 900 : ");
	for(int i=0;i<=num;i++)
	{
		if(num%i==0)
		if(i%2!=0)
		printf("%d ",i);
	}
	printf("\n");
}
