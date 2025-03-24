#include<stdio.h>
void my_strncpy(char *,char *,int);
int my_strlen(const char *);
char * my_strchr(char *,char);
void main()
{
	char s[50];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	char *p=s,*q,lw[25];
	int len=0,len1;
	
	while(q=my_strchr(p,' '))
	{	
		len1=q-p;
		if(len1>len)
		{
			len=len1;
			my_strncpy(lw,p,len1);
		}
		p=q+1;
	}
	len1=my_strlen(p);
	if(len1>len)
	{
		len=len1;
		my_strncpy(lw,p,len1);
	}
	printf("%s\n",lw);
	
}

void my_strncpy(char *d,char *s,int len1)
{
	int i;
	for(i=0;i<len1;i++)
		d[i]=s[i];
	d[i]='\0';
}

char * my_strchr(char *p,char ch)
{
	while(*p)
	{
		if(*p==ch)
			return p;
		p++;
	}
	return 0;
}

int my_strlen(const char *p)
{
	int i;
	for(i=0;p[i];i++);
	return i;	
}
