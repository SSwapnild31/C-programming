#include<stdio.h>
void main()
{
	float f=23.5;
	int pos,*ip;
	
	ip=(int *)&f;
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",*ip>>pos&1);
	}
	printf("\n");
}
