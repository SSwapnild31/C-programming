#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct size
{
	int c1;
	int l1;
}v;

void line_size(FILE *);

int main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("USAGE : ./a.out file_name line_no\n");
		return 0;
	}	

	char **s;
	FILE *fp;

	fp=fopen(argv[1],"r");

	if(fp==NULL)
	{
		printf("file not opened..!\n");
		return 0;
	}

	line_size(fp);

	s=malloc(sizeof(char *)*v.l1);

	int i;

	for(i=0;i<v.l1;i++)
		s[i]=malloc(v.c1+1);

	i=0;
	while(i < v.l1 && fgets(s[i], v.c1 + 1, fp))
	{
		int len = strlen(s[i]);
		if(len > 0 && s[i][len-1]=='\n')
			s[i][len-1]='\0';
		i++;
	}

	int num = atoi(argv[2]);

	fp=fopen(argv[1],"w");

	for(int j=0; j<v.l1 ;j++)
	{
		i++;
		if(num==j+1)
			continue;
		fprintf(fp,"%s\n",s[j]);
	}

	return 0;
}

void line_size(FILE *fp)
{
	int c=0,ch;

	while((ch=fgetc(fp))!=EOF)
	{
		c++;
		if(ch=='\n')
		{
			v.l1++;
			if(c>v.c1)
				v.c1=c;
			c=0;
		}

	}
	if(c>v.c1)
		v.c1=c;

	rewind(fp);
}
