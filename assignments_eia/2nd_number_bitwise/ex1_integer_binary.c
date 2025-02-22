#include<stdio.h>
void main()
{
	int num,i;
	printf("Enter number : ");
	scanf("%d",&num);
		
	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%8==0)
			printf(" ");
	}
	printf("\n");
}	
