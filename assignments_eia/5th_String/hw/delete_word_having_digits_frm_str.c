#include<stdio.h>
#include<string.h>
int delete(char *,char *);
void check_digit(char *);
void main()
{
	char s[50];
	printf("Enter string : ");
	scanf("%[^\n]",s);

	printf("before : %s\n",s);
	
	check_digit(s);
	
	printf("before : %s\n",s);
}

void check_digit(char *s)
{
	char *p=s;
	int flag=0,i,diff=0,j=0;
	int len=strlen(p);
	
	for(i=0;i<=len;i++)
	{
		if(p[i]>='0' && p[i]<='9')
			flag=1;
		if((p[i]==' ' || p[i]=='\0')&& flag)
		{
			diff=delete(&p[j],&p[i+1]);
			flag=0;
			i=i-diff;
		}
		else if(p[i]==' ')
			j=i+1;
	}
}

int delete(char *p,char *q)
{
	int c=0;
	while(*p)
	{
		*p++=*q++;
		c++;
	}
	*p=*q;
	return c;
}
