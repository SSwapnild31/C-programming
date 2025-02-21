#include<stdio.h>
void main()
{
	int num  = 12435682;
	int sum,r,mul=1;
	for(sum=0 ; num ; num=num/10)
	{
		r=num%10;
		if(r%2==0)
			mul=mul*r;
		else
			sum=sum+r;
	}
	printf("multiplication of even digits = %d\n",mul);
	printf("addition of odd digits = %d\n",sum);
}
