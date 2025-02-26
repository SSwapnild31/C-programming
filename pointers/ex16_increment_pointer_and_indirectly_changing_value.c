#include<stdio.h>
void main()
{
	int i=258;
	char *cp;
	cp=(char *)&i;
	
	printf("*cp=%d\n",*cp);
	
	cp=cp+1;
	*cp=*cp+1;
	
	printf("*cp=%d\n",*cp);
	printf("i=%d\n",i);
}
