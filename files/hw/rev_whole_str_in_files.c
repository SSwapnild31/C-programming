#include<stdio.h>
#include<stdlib.h>
void str_rev(char *);
int main(int argc,char **argv)
{
	FILE *fp=fopen(argv[1],"r+");
		
	char ch;
	int c=0;

	while((ch=fgetc(fp))!='\n')
		c++;
	
	rewind(fp);

	char *s=malloc(c+1);

	fgets(s,c+1,fp);
	rewind(fp);
	str_rev(s);
	fputs(s,fp);
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
