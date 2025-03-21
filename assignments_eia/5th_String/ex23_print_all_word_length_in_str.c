#include<stdio.h>

char * my_strchr(const char *,char);
int my_strlen(const char *);
void main()
{
	char s[20];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	char *p,*q;
	p=s;
	
	while(q=my_strchr(p,' '))
	{
		printf("%d ",q-p);
		p=q+1;
	}
	printf("%d",my_strlen(p));
	printf("\n");
}

char * my_strchr(const char *p,char ch)
{
	for(int i=0;p[i];i++)
	{
		if(p[i]==32)
			return &p[i];
	}
	return 0;
}

int my_strlen(const char *p)
{
	int len;
	for(len=0;p[len];len++);
	return len;
}

