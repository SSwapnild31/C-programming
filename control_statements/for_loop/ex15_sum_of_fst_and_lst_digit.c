#include<stdio.h>
void main()
{
	int num,sum=0,r;
	printf("Enter an number : \n");	
	scanf("%d",&num);
	
	int c,temp,index=0;
	
	for(c=0,temp=num ; temp ; temp=temp/10,c++);
	
	for( ; num ; num=num/10)
	{
		r=num%10;
		index++;	
		if(index==1 || index==c)
			sum=sum+r;
	}
	printf("sum=%d\n",sum);
}
