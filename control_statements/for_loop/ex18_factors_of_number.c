#include<stdio.h>
void main()
{
	int num,i;
	printf("Enter an number : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
		if(num%i==0)
		printf("%d ",i);
	printf("\n");

}
