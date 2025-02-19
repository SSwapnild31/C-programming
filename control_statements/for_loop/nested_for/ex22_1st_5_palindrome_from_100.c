#include<stdio.h>
void main()
{
	int i,c=0,temp,r,rev;
	printf("first 5 palindrome numbers from 100 are : \n");
	for(i=100;c<5;i++)
	{
		for(rev=0,r=0,temp=i;temp;temp=temp/10)
		{
			r=temp%10;
			rev=rev*10+r;
		}
		if(i==rev)
		{
			printf("%d ",i);
			c++;
		}
	}
	printf("\n");
}
