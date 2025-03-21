#include<stdio.h>

char * my_strchr(const char *,char);
void my_strrev(char *);
void my_strrev1(char *,char *);
void main()
{
	char s[30];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	char *p,*q;
	p=s;
	
	my_strrev(p);	//first reverse whole string
	q=my_strchr(p,' ');	//finding space
	my_strrev1(p,q-1);	//reverse first world
	my_strrev(p);		//again reverse to original string
	
	printf("%s\n",s);
	
}
char * my_strchr(const char *p, char ch)
{
	for(int i=0;p[i];i++)
	{
		if(p[i]==' ')
			return &p[i];
	}
	return 0;
}

void my_strrev1(char *p,char *q)
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

void my_strrev(char *p)
{
	char *q,t;
	q=p;
	
	while(*q)
		q++;
	q--;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
}
