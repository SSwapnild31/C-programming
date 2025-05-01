//working on same size word

#include<stdio.h>
#include<string.h>

void main(int argc,char **argv)
{
	FILE *fp=fopen(argv[1],"r+");
	
	char s[20];
	
	while(fscanf(fp,"%s",s)!=EOF)
	{
		if(strstr(s,argv[2]))
		{
			fseek(fp,-6,SEEK_CUR);
			
			fputs(argv[3],fp);
		}
	}
}
