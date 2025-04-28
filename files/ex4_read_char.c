#include<stdio.h>

void main(int argc,char *argv[])
{
	FILE *fp;
	
	fp=fopen(argv[1],"r");
	
	char ch;
	while((ch=fgetc(fp))!=EOF)
		printf("%c",ch);
}
