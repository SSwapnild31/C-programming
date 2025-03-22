#include<stdio.h>

void my_strcpy(char *,char *);
int my_strrev(char *);
int check_palindrome(const char *,const char *);
void main()
{
	char s[20],d[20];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	my_strcpy(d,s);
	my_strrev(d);
	int i=check_palindrome(d,s);
	if(i==0)
		printf("Not palindrome..!\n");
	else
		printf("string is palindrome..\n");
}

int check_palindrome(const char *d,const char *s)
{
	for(int i=0;s[i];i++)
	{
		if(s[i]!=d[i])
			return 0;
	}
	return 1;
}

int my_strrev(char *d)
{
	char *q,t1[20],t;
	q=d;
	while(*q)
		q++;
	q--;
	while(d<q)
	{
		t=*d;
		*d=*q;
		*q=t;
		d++;
		q--;
	}
}

void my_strcpy(char *d,char *s)
{
	while(*s)
		*d++=*s++;
	*d=*s;
	/*int i;
	for(i=0;s[i];i++)
		d[i]=s[i];
	d[i]=s[i];*/
}
