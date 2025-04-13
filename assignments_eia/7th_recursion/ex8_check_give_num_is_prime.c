#include<stdio.h>

int rec_fun_prime(int,int);

void main()
{
	int num;
	printf("Enter num : ");
	scanf("%d",&num);
	
	int prime=rec_fun_prime(num,2);
	if(prime)
		printf("%d is not prime\n",num);
	else
		printf("%d is prime\n",num);
}

int rec_fun_prime(int num,int i)
{
	if(i>=num)
		return 0;
	if(num%i==0)
		return 1;
	return rec_fun_prime(num,i+1);
}
