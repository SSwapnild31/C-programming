#include<stdio.h>

void main(int argc,char **argv)
{
	if(argc<3)
	{
		printf("USAGE: ./my_cp srcfile dest1 dest2...\n");
		return;
	}
	
	FILE *sf, *df;
	
	sf=fopen(argv[1],"r");
	
	if(sf==0)
	{
		printf("src file not present..!\n");
		return;
	}
	
	char ch;
	
	for(int i=2;i<argc;i++)
	{
		df=fopen(argv[i],"w");
		while((ch=fgetc(sf))!=EOF)
			fputc(ch,df);
		rewind(sf);
	}
}
