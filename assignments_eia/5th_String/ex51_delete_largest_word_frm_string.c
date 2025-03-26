#include<stdio.h>
#include<string.h>

char * my_strchr(char *,char);
void delete(char *,char *);
void main()
{
	char m[50];
	printf("Enter string : ");
	scanf(" %[^\n]",m);
	
	printf("Before : %s\n",m);
	
	char *p=m,*q=0,*start,*end;
	int len=0,len1=0;

	while(q=my_strchr(p,' '))
	{
		len1=q-p;
		if(len1>len)
		{
			len=len1;
			start=p;
			end=q;
		}
		p=q+1;
	}
	len1=strlen(p);
	if(len1>len)
	{
		len=len1;
		start=p;
		delete(start,start+len);
	}
	else
		delete(start,end+1);

	printf("After : %s\n",m);
}

void delete(char *p,char *q)
{
	while(*p++=*q++);
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
