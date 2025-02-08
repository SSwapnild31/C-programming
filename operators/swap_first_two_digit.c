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
	
	/*	
	printf("n1=%d\n",n1);
	printf("n2=%d\n",n2);
	printf("n3=%d\n",n3);
	printf("n4=%d\n",n4);
	*/
		
	num=num+n3;
	num=num*10+n4;
	num=num*10+n2;
	num=num*10+n1;	
	
	printf("After swapping of first two digits=%d\n",num);
}
