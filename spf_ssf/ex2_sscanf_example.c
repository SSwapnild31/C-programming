#include<stdio.h>

void main()
{
	int i;
	char ch;
	float f;
	
	char s[]="10a34.5";
	
	sscanf(s,"%d%c%f",&i,&ch,&f);
	printf("i=%d ch=%c f=%f\n",i,ch,f);
}
