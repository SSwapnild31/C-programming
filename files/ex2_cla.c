#include<stdio.h>

void main(int argc, char *argv[])
{
	FILE *fp;

	fp=fopen(argv[1],"r");
	
	if(fp==0)
	{
		printf("Error : file not opened..!\n");
		return ;
	}
	char ch;
	ch=fgetc(fp);
	printf("%c\n",ch);
}
