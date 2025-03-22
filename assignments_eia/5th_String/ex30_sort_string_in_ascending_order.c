#include<stdio.h>

int lenstr(const char *);
void sort(char *,int);
void main()
{
	char s[20];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	printf("before : %s\n",s);
	int len=lenstr(s);
	sort(s,len);
	printf("after : %s\n",s);
}

void sort(char *p,int len)
{
	for(int i=0;i<len-1;i++)
	{
		for(int j=0;j<len-1-i;j++)
		{
			if(p[j]>p[j+1])
			{
				char t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
}

int lenstr(const char *p)
{
	int i;
	for(i=0;p[i];i++);
	return i;
}
