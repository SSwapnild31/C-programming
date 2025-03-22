#include<stdio.h>

int check_palindrome(char *);
void main()
{
	char s[20];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	int i=check_palindrome(s);
	if(i==0)
		printf("Not palindrome..!\n");
	else
		printf("string is palindrome..\n");
}

int check_palindrome(char *p)
{
	char *q=p;
	while(*q)
		q++;
	q--;
	while(p<q)
	{
		if(*p!=*q)
			return 0;
		p++;
		q--;
	}
	return 1;
}

