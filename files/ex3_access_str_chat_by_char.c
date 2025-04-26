#include<stdio.h>

void main(int argc, char *argv[])
{
	FILE *fp;
	fp=fopen(argv[1],"r");
	
	if(fp==0)
	{
		printf("Error : file not opened or not present..!\n");
		return ;
	}

	char ch;
	ch=fgetc(fp);
	while(ch!=10)
	{
		printf("%c",ch);
		ch=fgetc(fp);
	}
	printf("\n");
}
