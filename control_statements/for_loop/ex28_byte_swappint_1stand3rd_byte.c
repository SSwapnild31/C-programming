#include<stdio.h>
void main()
{
	int num;
	printf("Enter int num : ");
	scanf("%d",&num);
	
	int pos;
	
	for(pos=31;pos>=0;pos--)
	printf("%d",num>>pos&1);
	printf("\n");
	
	int i,j,m,n;
	
	for(i=0,j=16;i<=7;i++,j++ )
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
	printf("\n");
	
	printf("%d\n",num);
}
