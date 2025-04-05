#include<stdio.h>


void main()
{
	int num,r,count=0;
	printf("Enter num : ");
	scanf("%d",&num);
	
	do{
		r=num%10;
		if(r%2==0)
			count++;
		num/=10;
	}while(num);
	
	printf("count=%d\n",count);
	
	/*for( ;num;num/=10)
	{
		r=num%10;
		if(r%2==0)
			count++;
	}
	printf("count=%d\n",count);*/
}
