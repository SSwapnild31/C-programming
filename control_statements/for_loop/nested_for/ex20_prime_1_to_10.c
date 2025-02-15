#include<stdio.h>
void main()
{
	int num,i;
	for(num=1;num<=10;num++)
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			 break;
		}
		if(num==i)
		 printf("%d ",num);
	}
	printf("\n");
}
