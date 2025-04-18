#include<stdio.h>

/*struct st 
{
	char ch1;
	char ch2;
	int i;
	int j;
};*/

/*struct st
{
	char ch1;
	int i;
	char ch2;
	int j;
};*/

/*
#pragma pack(1)

struct st
{
	int i;
	char ch1;
	int j;
	char ch2;
};*/
	
struct st
{
	int i;
	char ch1;
	float f;
	//int j;
	char ch2;
}__attribute__((packed));

void main()
{
	struct st v;
	
	printf("%ld\n",sizeof(v));
}
