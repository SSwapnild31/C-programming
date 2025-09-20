#include<stdio.h>

int main()
{
	int num, c=0;
	printf("Enter number : ");
	scanf("%d",&num);
	
	for(int pos=31;pos>=0;pos--)
	{
		if(num>>pos&1)
			c++;
	}
	printf("count of set bits %d\n",c);
	
	return 0;
}
