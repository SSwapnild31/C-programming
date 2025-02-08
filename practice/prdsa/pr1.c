
//without using third variable

#include<stdio.h>

void main()
{
	int n1,n2;
	printf("Enter two numbwrs\n");
	scanf("%d%d",&n1,&n2);
	
	printf("Before Swapping n1=%d n2=%d\n",n1,n2);
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	
	
	printf("After Swapping  n1=%d n2=%d\n",n1,n2);

}
