#include<stdio.h>

void main(int argc,char **argv)
{
	FILE *fp=fopen(argv[1],"r");
	char s[100],c;
	
	while(fgets(s,100,fp))
		c++;
	printf("no of lines : %d\n",c);
}

