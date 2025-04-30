#include<stdio.h>

int digit_check(const char *);
void main()
{
	FILE *fp=fopen("data","r");
	FILE *fp1=fopen("data1","w");
	
	char s[10];
	
	while(fscanf(fp,"%s",s)!=EOF)
		if(digit_check(s))
			fprintf(fp1,"%s ",s);
}

int digit_check(const char *p)
{
	for(int i=0;p[i];i++)
	{
		if(p[i]>='0' && p[i]<='9')
			return 1;
	}
	return 0;
}
