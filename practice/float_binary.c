#include<stdio.h>

int main()
{
	float f = 23.5;
	int *p =(int*)&f;

	for(int pos = 31; pos >= 0; pos--){
		printf("%d",*p >> pos & 1);
	}
	printf("\n");

	return 0;
}
