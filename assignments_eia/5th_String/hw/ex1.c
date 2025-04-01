#include<stdio.h>
#include<string.h>
int delete(char *,char *);
void my_strchr(char *,int);
void main()
{
	char m[50];
	printf("Enter string : ");
	scanf("%[^\n]",m);
	
	printf("before : %s\n",m);
	int len=strlen(m);	
	my_strchr(m,len);
	
	printf("after : %s\n",m);
}

void my_strchr(char *p,int len)
{
	int flag=0;
	char *q=p;
	for(int i=0;i<=len;i++)
	{
		if(p[i]>='0' && p[i]<='9')
			flag=1;
		if(p[i]==' ' || p[i]=='\0' && flag)
		{
			int diff=delete(q,&p[i]+1);
			i=i-diff;
			flag=0;
			q=&p[i];
			i--;
		}
		else if(p[i]==' ')
		{
			q=&p[i]+1;
		}
			
	}
}

int delete(char *p,char *q)
{
	int c=0;
	while(*q)
	{
		*p++=*q++;
		c++;
	}
	*p=*q;
	return c;
}
