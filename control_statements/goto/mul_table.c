#include<stdio.h>
void main()
{
	int num,i=1;
	printf("enter num : \n");
	scanf("%d",&num);
	l:
	printf("%d * %d = %d\n",num,i,num*i);
	i++;
	if(i<=10)
		goto l;
}
