#include<stdio.h>
void main()
{
	int num;
	printf("Enter int number : ");
	scanf("%d",&num);
	
	int pos,i,j,m,n;
	
	for(pos=31;pos>=0;pos--)
		printf("%d",num>>pos&1);
	printf("\nnum : %d\n",num);
	
	for(i=0,j=31;i<j;i++,j--)
	{
		m=num>>i&1;
		n=num>>j&1;
		if(m!=n)
		{
			num=num^1<<i;
			num=num^1<<j;	
		}	
	}
	
	for(pos=31;pos>=0;pos--)
		printf("%d",num>>pos&1);
	printf("\nnum :%d\n",num);
}
