//add & mul of even digits

#include<stdio.h>
void main()
{
	int num,r,sum,mul;
	printf("Enter an number : \n");
	scanf("%d",&num);
	
	for(sum=0,mul=1; num ;num=num/10)
	{
		r=num%10;
		if(num%2==0)
		sum=sum+r;
		else
		mul=mul*r;
	}
	
	printf("sum=%d mul=%d\n",sum,mul);

}
