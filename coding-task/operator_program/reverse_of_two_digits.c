#include<stdio.h>
void main()
{
	int num,r1;
	printf("Enter an number : \n");
	scanf("%d",&num);
	
	r1=num%10;
	num=num/10;
	
	//printf("%d %d\n",r1,num);

	num = r1 * 10 + num;
	printf("%d\n",num);
}
