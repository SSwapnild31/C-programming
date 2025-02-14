#include<stdio.h>
void main()
{
	int num,r,rev=0;
	printf("Enter 2 digit num : ");
	scanf("%d",&num);
	if(num>=10 && num<=99)
	{
		r=num%10;
		num=num/10;
		rev=rev*10+r;
		rev=rev*10+num;
		printf("reverse number : %d\n",rev);
	}
	else
		printf("oops..not a 2 digit number..\n");
}
