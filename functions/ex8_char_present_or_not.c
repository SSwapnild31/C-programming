#include<stdio.h>

const char * my_strchr(const char *,char);

void main()
{
	char s[10],ch;
	printf("Enter string : ");
	scanf("%s",s);
	printf("Enter char : ");
	scanf(" %c",&ch);
	
	const char *p;
	p=my_strchr(s,ch);	
	if(p==0)
		printf("char is not present..!\t");
	else
		printf("char is present..\n");
}

const char * my_strchr(const char *s,char ch)
{
	int i;
	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
			return s+i;
	}
	return 0;
}
