#include<stdio.h>
void main()
{
	int num,c=0;
	printf("Enter int num : ");
	scanf("%d",&num);
	
	for(int i=31;i>=0;i--)
	{
		int m=num>>i&1;
		m ? c++ : 0;
		printf("%d",m);
		i%8==0 ? printf(" ") : 0;
	}
	printf("\ncount of set bit is %d\n",c);

}
