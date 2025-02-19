#include<stdio.h>
void main()
{
	int num,temp,r,rev,c=0;
	for(num=100;c<5;num++)
	{
		for(rev=0,temp=num;temp;temp/=10)
		{
			r=temp%10;
			rev=rev*10+r;
		}
		if(num==rev)
		{
			c++;
								//printf("c=%d rev=%d\n",c,rev);
								//sleep(1);
			if(c==5)
			{
				printf("5th palindrome from 100 : %d\n",rev);
				break;
			}
		}
	}
}
