#include<stdio.h>

enum day{mon,tue,wed,thu,fri,sat,sun};

//enum day1{wed,thu};

void main()
{
	//tue++;	//error
	
	int num;
	num=fri;
	num++;
	
	printf("%d\n",num);
	//printf("%d\n",mon);
}
