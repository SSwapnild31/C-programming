#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char **argv)
{
	FILE *fp=fopen(argv[1],"r+");
	
	char *s=malloc(15);;
	int len;
	while(fscanf(fp,"%s",s)!=EOF)
	{
		len=strlen(s);
		
	}
}
