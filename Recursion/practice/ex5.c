#include<stdio.h>

int factors(int);
void main()
{
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	
	int sum=factors(num);
	printf("\nsum of all factors : %d\n",sum);
}

int factors(int num)
{
	static int i=1,sum=0;
	if(i!=num)
	{
		if(num%i==0)
		{
			printf("%d ",i);
			sum=sum+i;
		}
		i++;
		factors(num);
		
	}
	else
		return sum;
}

