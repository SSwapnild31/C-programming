#include<stdio.h>
void main()
{
	int num,bit,pos;
	printf("Enter num : ");
	scanf("%u",&num);
	
	printf("Enter bits : ");
	scanf("%d",&bit);
	
	printf("Enter pos : ");
	scanf("%d",&pos);
	
	int i=31;
	while(i>=0)
	{	
		printf("%d",num>>i&1);
		if(i%8==0)
			printf(" ");
		i--;
	}
	printf("\n");
	
	unsigned int r1,r2;
	
	r1=num<<32-pos;
	r1=r1>>32-pos;
	r2=num>>bit+pos;
	r2=r2<<pos;
	
	num = r1 | r2;
					//printf("%d\n",num);	
	i=31;
	while(i>=0)
	{
		printf("%d",num>>i&1);
		if(i%8==0)
			printf(" ");
		i--;
	}
	printf("\n");
}
