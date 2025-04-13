#include<stdio.h>

int rec_fun_bitCount(int);
int bitCount_helper(int,int);
void main()
{
	int num;
	printf("Enter num : ");
	scanf("%d",&num);
	
	int count=rec_fun_bitCount(num);
	printf("set bit count : %d\n",count);
}

int rec_fun_bitCount(int num)
{
	return bitCount_helper(num,31);
}

int bitCount_helper(int num,int pos)
{
	if(pos<0)
		return 0;
	if(num>>pos&1)
		return 1+bitCount_helper(num,pos-1);
	return bitCount_helper(num,pos-1);
}
