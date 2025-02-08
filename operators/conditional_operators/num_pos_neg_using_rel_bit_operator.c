#include<stdio.h>
void main()
{
	int num;
	printf("Enter an non zero number :\n");
	scanf("%d",&num);
	
	//inum>0 ? printf("num is +ve\n") : printf("num is -ve\n");
	
	num>>31&1 ? printf("num is -ve\n") : printf("num is +ve\n");

}
