#include<stdio.h>
int my_len(const char *);
void main()
{
	char s[10];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	int len;
	len=my_len(s);
	printf("length of str is %d\n",len);
}

int my_len(const char *p)
{
	int len=0;
	while(*p)
	{
		len++;
		*p++;
	}
	return len;
}
