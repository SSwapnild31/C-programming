#include<stdio.h>

void main()
{
	int i=10;
	char ch='a';
	float f=23.5;
	
	char s[100];
	
	sprintf(s,"%d%c%f",i,ch,f);
	printf("s=%s\n",s);
}
