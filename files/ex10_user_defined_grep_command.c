//if entered word is present that line will be printed on o/p screen.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("USAGE: ./a.out word filename\n");
		return;
	}
	
	FILE *fp=fopen(argv[2],"r");;
	
	if(fp==0)
	{
		printf("file is not present..!\n");
		return;
	}
	
	//logic for finding longest line length

	int c=0,c1;
	char ch;
	
	while((ch=fgetc(fp))!=EOF)
	{
		c++;
		if(ch=='\n')
		{
			if(c>c1)
				c1=c;
			c=0;
		}
	}
	
	rewind(fp);
	
	///////////////////////////////////////////
	
	char *s=malloc(c1+1);
	
	while(fgets(s,c1+1,fp))
	{
		if(strstr(s,argv[1]))
			printf("%s",s);
	}
}
