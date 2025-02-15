#include<stdio.h>
void main()
{
	int num,i,j,k;
	printf("Enter rows : ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		for(j=0;j<num-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
