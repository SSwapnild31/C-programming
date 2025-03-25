#include<stdio.h>
#include<string.h>

char * my_strchr(char *,char);
void pal_string(char *,char *);
void main()
{
	char m[100];
	printf("Enter main string : ");
	scanf(" %[^\n]",m);
	
	printf("before : %s\n",m);
	
	char *p=m,*q;

	while(q=my_strchr(p,' '))
	{
		pal_string(p,q-1);
		p=q+1;
	}

	pal_string(p,p+strlen(p)-1);
	
	printf("after : %s\n",m);
}

void pal_string(char *p,char *q)
{
	char *m=p,*s=q;
	int flag=1;
	while(m<s)
	{
		if(*m!=*s)
		{
			flag=0;
			break;
		}
		m++;
		s--;
	}	
	if(flag)
	{
		q+=2;
		while(*p++=*q++);
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
