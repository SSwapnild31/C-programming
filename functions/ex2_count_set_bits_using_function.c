#include<stdio.h>
int count_set_binary(int);
void main()
{
	int num,r;
	printf("Enter number : ");
	scanf("%d",&num);
	r=count_set_binary(num);
	printf("set bit binary count : %d\n",r);
}

int count_set_binary(int num)
{
	int pos,count=0;
	for(pos=0;pos<=31;pos++)
		if(num>>pos&1)
			count++;
	return count;
}
