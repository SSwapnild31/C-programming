#include<stdio.h>
void my_strcpy(char *,char *);
int my_strlen(const char *);
char * my_strchr(char *,char);
void main()
{
	char s[30];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	char *p=s,*q,lw[10];
	int len=0,len1;
	
	while(q=my_strchr(p,' '))
	{	
		len1=my_strlen(p);
		if(len1>len)
		{
			len=len1;
			my_strcpy(lw,p);
		}
		p=q+1;
	}
	q=my_strchr(p,'\0');
	len1=my_strlen(p);
	if(len1>len)
	{
		len=len1;
		my_strcpy(lw,p);
	}
	printf("%s\n",lw);
	
}

void my_strcpy(char *d,char *s)
{
	int i;
	for(i=0;s[i]!=' ';i++)
		d[i]=s[i];
	d[i]='\0';
}

char * my_strchr(char *p,char ch)
{
	
	for(int i=0;p[i];i++)
	{
		if(p[i]==ch)
			return &p[i];
	}
	return 0;
}

int my_strlen(const char *p)
{
	int i;
	for(i=0;p[i]!=' ';i++);
	return i;	
}
