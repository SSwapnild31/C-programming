#include<stdio.h>

int strlen1(char *);
int main()
{
	char s[10];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	int len=strlen1(s);
	printf("length of %s is %d\n",s,len);
	return 0;
}

int strlen1(char *p)
{
	static int i;
	if(*p)
	{
		i++;
		strlen1(p+1);
	}
	else
		return i;
}

