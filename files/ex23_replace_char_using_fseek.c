#include<stdio.h>

void main(int argc,char *argv[])
{
	FILE *fp;
	fp=fopen(argv[1],"r+");
	
	char ch;
	
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch==argv[2][0])
		{
			fseek(fp,-1,SEEK_CUR);
			fputc(argv[3][0],fp);
		}
	}
}
