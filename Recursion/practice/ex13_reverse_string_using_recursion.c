#include<stdio.h>

void strrev1(char *,char *);
void main()
{
	char s[20];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	printf("before : %s\n",s);
	char *q;
	q=s;
	while(*q)
		q++;
	q--;
	
	strrev1(s,q);
	printf("after : %s\n",s);
}

void strrev1(char *p,char *q)
{
	static char t;
	if(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		strrev1(p+1,q-1);
	}
}
