#include<stdio.h>
#include<string.h>

void delete(char *,char *);
char * my_strchr(char *,char);
int pal_string(char *,char *);
void main()
{
	char m[100];
	printf("Enter main string : ");
	scanf(" %[^\n]",m);
	
	printf("before : %s\n",m);
	
	char *p=m,*q;
	int res=0;
	while(q=my_strchr(p,' '))
	{
		res=pal_string(p,q-1);
		if(res)
			delete(p,q+1);
		else
			p=q+1;
	}
	res=pal_string(p,p+strlen(p)-1);
	if(res)	
		delete(p,p+strlen(p));
	printf("after : %s\n",m);
}

void delete(char *p,char *q)
{
	while(*p++=*q++);
}

int pal_string(char *p,char *q)
{
	int flag=1;
	while(p<q)
	{
		if(*p!=*q)
		{
			flag=0;
			break;
		}
		p++;
		q--;
	}	
	if(flag)
		return 1;
	return 0;
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
