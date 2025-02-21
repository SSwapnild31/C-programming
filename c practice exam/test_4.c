/*
   A
  123
 ABCDE
1234567
*/


#include<stdio.h>
void main()
{
	int num,i,j,k;
	char ch;
	
	printf("Enter rows : ");
	scanf("%d",&num);
	if(num>0)
	{
	for(i=0;i<num;i++)
	{
		for(j=0;j<num-i;j++)
		{
			printf(" ");
		}
		for(ch='A',k=0;k<=i*2;k++)
		{	
			if(i%2==0)
				printf("%c",ch++);
			else
				printf("%d",k+1);
		}
		printf("\n");
	}
	}
	else
		printf("invalid input\n");
	
}
