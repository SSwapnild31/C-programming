#include<stdio.h>
void main()
{
	int num=6,fact=1;
	for(int i=num;i>0;i--)
	{
		fact=fact*i;
	}
	printf("fact of num %d : %d\n",num,fact);
}
