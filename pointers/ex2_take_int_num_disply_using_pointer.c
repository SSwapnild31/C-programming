#include<stdio.h>
void main()
{
	int num,*p;
	p=&num;
	printf("Enter an number : ");
	scanf("%d",&num);
	
	printf("*p=%d num=%d\n",*p,num);

}
