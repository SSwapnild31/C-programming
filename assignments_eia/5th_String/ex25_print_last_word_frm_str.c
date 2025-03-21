#include<stdio.h>

const char * my_strchr(const char *,char);
void main()
{
	char s[20];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	const char *p,*q;	
	p=s;
	
	while(q=my_strchr(p,' '))
		p=q+1;
	
	printf("%s\n",p);
}

const char * my_strchr(const char *p,char ch)
{
	for(int i=0;p[i];i++)
	{
		if(p[i]==ch)	
			return &p[i];
	}
	return 0;
}

int my_strlen(const char *p)
{
	int len;
	for(len=0;p[len];p++);
	return len;	
}
