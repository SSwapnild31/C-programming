#include<stdio.h>

void binaryPrint(int);
int swapByte(int);

void main()
{
	int num;
	printf("enter number : ");
	scanf("%d",&num);
	
	binaryPrint(num);
	num=swapByte(num);
	binaryPrint(num);
}

int swapByte(int num)
{
	int i,j,m,n;
	for(i=0,j=7;i<j;i++,j--)
	{
		m=num>>i&1;
		n=num>>j&1;
		if(m!=n)
		{
			num=num^1<<i;
			num=num^1<<j;
		}
	}
	return num;
}

void binaryPrint(int num)
{
	char pos;
	for(pos=31;pos>=0;pos--)
		printf("%d",num>>pos&1);
	printf("\n");
}
