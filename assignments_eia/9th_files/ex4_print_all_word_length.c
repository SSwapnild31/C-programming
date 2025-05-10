#include<stdio.h>

void main(int argc,char **argv)
{
	FILE *fp=fopen(argv[1],"r");
	char s[25];
	int i;
	while(fscanf(fp,"%s",s)!=EOF)
	{
		for(i=0;s[i];i++);
		printf("%d ",i);
	}
	printf("\n");
}

