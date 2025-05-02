#include<stdio.h>
#include<string.h>
char *my_strchr(char *,char);
int digit_check(const char *,const char *);
void delete(char *,char *);
void main()
{
	char m[50];
	printf("enter string having digits : ");
	scanf("%[^\n]",m);
	
	char *p=m,*q;
	
	while(q=my_strchr(p,' '))
	{
		if(digit_check(p,q))
			delete(p,q+1);
		else
			p=q+1;
	}
	if(digit_check(p,p+strlen(p)))
		delete(p,p+strlen(p));
	
	printf("%s\n",m);
}

char *my_strchr(char *p,char ch)
{
	while(*p)
	{
		if(*p==ch)
			return p;
		p++;
	}
	return 0;
}

int digit_check(const char *p,const char *q)
{
	while(p<q)
	{
		if(*p>='0'&&*p<='9')
			return 1;
		p++;
	}
	return 0;
}


void delete(char *p,char *q)
{
	while(*p++=*q++);
}
