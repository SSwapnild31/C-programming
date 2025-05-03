#include<stdio.h>
#include<string.h>
void str_rev(char *);
void main(int argc, char **argv)
{
	
	FILE *fp=fopen(argv[1],"r+");
		
	char s[20];

	while(fscanf(fp,"%s",s)!=EOF)
	{
		str_rev(s);
		fseek(fp,-(strlen(s)),SEEK_CUR);
		fprintf(fp,"%s",s);
	}
}

void str_rev(char *p)
{
	char *q=p,t;

	while(*q)
		q++;
	q--;
	
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
}
