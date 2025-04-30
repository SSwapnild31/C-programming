#include<stdio.h>

void main()
{
	FILE *fp=fopen("data","r");
	
	char s[20];
	
	while(fscanf(fp,"%s",s)!=EOF)
		printf("%s\n",s);
}
