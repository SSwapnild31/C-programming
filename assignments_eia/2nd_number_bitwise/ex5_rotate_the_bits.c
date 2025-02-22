#include<stdio.h>
void main()
{
	short int num,m;
	int bit,i;
	
	printf("Enter short int number : ");
	scanf("%hd",&num);
	
	printf("rotate bit : ");
	scanf("%d",&bit);
	
	i=15;
	while(i>=0)
	{
		printf("%d",num>>i&1);
		i--;
	}
	printf("\n");
	
	i=0;
	while(i<bit)
	{	
		m=num&1;
		num=num>>1;
		if(m)
			num=num|1<<15;
		i++;
	}
	
	/*short int p1,p2;
	p1=num>>bit;
	p2=num<<(16-bit);
	num = p1 | p2;*/
	
	i=15;
	while(i>=0)
	{
		printf("%d",num>>i&1);
		i--;
	}
	printf("\n");
}
