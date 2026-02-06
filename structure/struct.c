#include<stdio.h>

struct st{
	int rollno;
	char name[20];
};

int main()
{
	struct st v = {10,"Swapnil"};
	
	printf("v : %d %s\n",v.rollno, v.name);
	
	return 0;
}
