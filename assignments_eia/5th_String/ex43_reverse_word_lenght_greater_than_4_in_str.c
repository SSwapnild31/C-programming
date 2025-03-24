#include<stdio.h>
#include<string.h>
char * my_strchr(char *,char);
void strrev1(char *,char *);
void main()
{
	char s[50];
	printf("Enter string : ");
	scanf("%[^\n]",s);
		
	
	printf("before : %s\n",s);
	
	char *p,*q;
	p=s;
	int len;
	while(q=strchr(p,' '))
	{
		len=q-p;
		if(len>4)
			strrev1(p,q-1);
		p=q+1;
	}
	len=strlen(p);
	if(len>4)
		strrev1(p,p+len-1);
	
	printf("after : %s\n",s);
	
}

void strrev1(char *p,char *q)
{
	char t;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
}

char * my_strchr(char *p,char ch)
{
	while(*p)
	{
		if(*p==ch)
			return p;
		p++;
	}
	return 0;
}
