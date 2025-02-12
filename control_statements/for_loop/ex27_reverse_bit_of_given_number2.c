#include<stdio.h>
void main()
{
	int num;
	printf("Enter int number : ");
	scanf("%d",&num);
	
	int pos,i,j,m;
	
	for(pos=31;pos>=0;pos--)
	printf("%d",num>>pos&1);
	printf("\n");
	
	int num1=0;
	
	for(i=0,j=31;i<=31;i++,j--)
	{
		m=num>>i&1;
		if(m)
		 num1=num1|1<<j;	
	}
	num=num1;
	
	for(pos=31;pos>=0;pos--)
	printf("%d",num>>pos&1);
	printf("\n");
	
	printf("%d\n",num);
}
