#include<stdio.h>

void my_strrev1(char *,char *);
char * my_strchr(const char*,char);
void main()
{
	char s[50];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	char *p,*q;
	p=s;
	
	q=my_strchr(p,' ');
	my_strrev1(p,q-1);
	
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

void my_strrev1(char *p, char *q)
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
