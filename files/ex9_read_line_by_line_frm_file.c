#include<stdio.h>

void main(int argc,char **argv)
{
	FILE *fp;
	
	fp=fopen(argv[1],"r");
	
	char s[20];
	
	while(fgets(s,20,fp))
		printf("%s",s);
}
