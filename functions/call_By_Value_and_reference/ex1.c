#include<stdio.h>
void CallByValue(int);
void CallByRef(int *);

void main()
{
	int num=10;
	printf("before calling fun num is %d\n",num);
	//CallByValue(num);
	CallByRef(&num);
	printf("after calling fun num is %d\n",num);
}

void CallByValue(int num)
{
	num=100;
}

void CallByRef(int *p)
{
	*p=200;
}
