#include<stdio.h>

void delete(char *,char *);
void my_substr(char *,char *);
void main()
{
	char m[50],s[25];
	printf("Enter main string : ");
	scanf("%[^\n]",m);
	printf("Enter sub string : ");
	scanf(" %[^\n]",s);
	
	printf("before :%s\n",m);
	my_substr(m,s);		
	printf("after :%s\n",m);
}

void my_substr(char *m,char *s)
{
	for(int i=0,j=0;m[i];i++)
	{
		if(m[i]==s[j])
		{
			for(j=1;s[j];j++)
			{
				if(m[i+j]!=s[j])
					break;
			}
			if(s[j]=='\0')
			{
				delete(&m[i],&m[i+j]);
				i--;
			}
			j=0;
		}
	}
}

void delete(char *p,char *q)
{
	while(*p++=*q++);
}
