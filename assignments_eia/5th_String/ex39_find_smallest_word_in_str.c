#include<stdio.h>

int my_strlen(char *);
char * my_strchr(char *,char);
void my_strncpy(char *,char *,int);
void main()
{
	char s[50];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	char *p,*q,sw[25];
	p=s;
	int len1=100,len;
	while(q=my_strchr(p,' '))
	{
		len=q-p;
		if(len1>len)
		{
			len1=len;
			my_strncpy(sw,p,len1);
		}
		p=q+1;		
	}
	len1=my_strlen(p);
	if(len1>len)
	{
		len=len1;
		my_strncpy(sw,p,len1);
	}
	printf("smallest word : %s\n",sw);
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

int my_strlen(char *p)
{
	int i;
	for(i=0;p[i];i++);
	return i;
}
