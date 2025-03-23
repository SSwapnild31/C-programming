#include<stdio.h>

char * my_strchr(char *,char);
void my_strrev(char *);
void my_strrev1(char *,char *);

void main()
{
	char s[30];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	printf("before : %s\n",s);
	
	char *p,*q;
	p=s;
	
	while(q=my_strchr(p,' '))
	{
		my_strrev1(p,q-1);
		p=q+1;
	}
	my_strrev(p);

	printf("after : %s\n",s);
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

char * my_strchr(char *p,char ch)
{
	for(int i=0;p[i];i++)
	{
		if(p[i]==ch)
			return &p[i];
	}
	return 0;
}
