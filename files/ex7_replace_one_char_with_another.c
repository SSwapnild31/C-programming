#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	if(argc!=4)
	{
		printf("USAGE: ./a.out filename oldchr newchr\n");
		return ;
	}
	
	FILE *fp;
	fp=fopen(argv[1],"r+");
	
	char ch;
	int c=0,i=0;
	
	while((ch=fgetc(fp))!=EOF)
		c++;

	char *s=malloc(c+1);
	
	rewind(fp);
	
	while((ch=fgetc(fp))!=EOF)
		s[i++]=ch;
	s[i]='\0';	
	
	for(i=0;s[i];i++)
		if(s[i]==argv[2][0])
			s[i]=argv[3][0];
	
	rewind(fp);
	
	for(i=0;s[i];i++)
		fputc(s[i],fp);
}
