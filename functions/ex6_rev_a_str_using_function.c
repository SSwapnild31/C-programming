#include<stdio.h>
int str_len(const char *);
void str_rev(char *);

void main()
{
	char s[10];
	int len;
	printf("Enter string : ");
	scanf("%[^\n]",s);
	str_rev(s);
	printf("%s\n",s);
}
void str_rev(char *p)
{
	char *q,t;
	int len;
	len=str_len(p);
	q=p+len-1;
	while(p<q)
	{en=0;
 53         while(*p)

		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
}
int str_len(const char *p)
{
	int len=0;
	while(*p)
	{
		len++;
		p++;
	}
	return len;
}
