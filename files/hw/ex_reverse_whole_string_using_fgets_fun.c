#include<stdio.h>
#include<string.h>
void strrev(char *);

int main(int argc,char **argv)
{
	FILE *fp=fopen(argv[1],"r+");
	
	char s[100];
	
	fgets(s,100,fp);
	rewind(fp);
	
	int len=strlen(s);
	if(len>0 && s[len-1]=='\n')
		s[len-1]='\0';
	
	strrev(s);
	
	fputs(s,fp);
}

void strrev(char *p)
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
