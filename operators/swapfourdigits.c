#include<stdio.h>
void main()
{
	int num,n1,n2,n3,n4;
	printf("Enter an number...\n");
	scanf("%d",&num);
	
	printf("Before swapping=%d\n",num);
	
	n1=num%10;
	num=num/10;
	n2=num%10;
	num=num/10;
	n3=num%10;
	num=num/10;
	n4=num%10;
	num=num/10;
		
	num=num+n1;
	num=num*10+n2;
	num=num*10+n3;
	num=num*10+n4;	
	
	printf("After swapping of first two digits=%d\n",num);
}
