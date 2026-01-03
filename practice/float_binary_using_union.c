#include<stdio.h>

union data
{
	float f;
	int   i;
};

int main()
{
	union data d;
	d.f = 23.5;

	for(int pos = 31; pos >= 0; pos--){
		printf("%d",d.i >> pos & 1);
	}
	printf("\n");

	return 0;
}
