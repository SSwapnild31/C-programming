#include<stdio.h>

void main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("USAGE: ./my_cp srcfile destfile\n");
		return;
	}
	
	FILE *sf,*df;
	
	sf=fopen(argv[1],"r");
	if(sf==0)
	{
		printf("src file not present..!\n");
		return ;
	}
	
	df=fopen(argv[2],"w");
	char ch;
	
	while((ch=fgetc(sf))!=EOF)
		fputc(ch,df);
}
