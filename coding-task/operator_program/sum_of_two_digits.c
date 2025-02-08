#include<stdio.h>
void main()
{
	int num,dig1,dig2;
	printf("Enter an number : \n");
	scanf("%d",&num);
	dig2 = num % 10;
	dig1 = num / 10;
	printf("%d + %d = %d\n",dig1,dig2,dig1 + dig2);
}
