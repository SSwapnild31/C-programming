#include<stdio.h>
#include<string.h>

char * my_strchr(char *,char);
void delete(char *,char *);
void main()
{
	char m[50];
	printf("Enter string : ");
	scanf("%[^\n]",m);
	
	printf("Before : %s\n",m);
	
	char *p=m,*q,*lw=0;
	int len=0,len1;
	while(q=my_strchr(p,' '))
	{
		len1=q-p;
		if(len1>len)
		{
			len=len1;
			lw=p;
		}
		p=q+1;
	}
	len1=strlen(p);
	if(len1>len)
	{
		len=len1;
		lw=p;
	}
	printf("len=%d len1=%d m=%d lw=%d\n",len,len1,m,lw);
	delete(lw,lw+len+1);
	
	printf("After : %s\n",m);
}

void delete(char *p,char *q)
{
	while(*p++=*q++);
}

char * my_strchr(char *p,char ch)
{
	for(int i=0;p[i];i++)
	{
		if(p[i]==ch)
			return p;
	}
	return 0;
}
