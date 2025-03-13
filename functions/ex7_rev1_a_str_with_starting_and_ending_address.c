#include<stdio.h>

int str_len(const char *);
void str_rev1(char *,char *);

void main()
{
	char s[10];
	printf("Enter string : ");
	scanf("%s",s);
	
	int len;
	printf("before : %s\n",s);
	
	len=str_len(s);
	str_rev1(s,s+len-1);
	
	printf("after : %s\n",s);
}

void str_rev1(char *p,char *q)
{
	char t;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
}

int str_len(const char *a)
{
	int len=0;
	while(*a)
	{
		len++;
		*a++;
	}
	return len;
}
