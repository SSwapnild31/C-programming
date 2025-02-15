#include<stdio.h>
void main()
{
	int num,i,sum=0,c=0;
	printf("prime numbers : ");
	for(num=1;num<=10;num++)
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			 break;
		}
		if(num==i)
		{
			printf("%d ",num);
			c++;
			sum=sum+num;
		}
	}
	printf("\nsum : %d count : %d\n",sum,c);
}
