#include<stdio.h>
void main()
{
	char ch,m,ch1;
	printf("Enter char : ");
	scanf("%c",&ch);
	
	printf("bits before reverse : ");
	for(int i=7;i>=0;i--)
	{
		printf("%d",ch>>i&1);
		if(i%4==0)
			printf(" ");
	}
	printf("\n");
	
	for(int i=0,j=7;i<=7;i++,j--)
	{	
		m=ch>>i&1;
		if(m)
			ch1=ch1|1<<j;
	}		
	ch=ch1;

	printf("bits after reverse : ");
	for(int i=7;i>=0;i--)
	{
		printf("%d",ch>>i&1);
		if(i%4==0)
			printf(" ");
	}
	printf("\n");
}
