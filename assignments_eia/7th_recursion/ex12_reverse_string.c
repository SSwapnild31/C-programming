#include<stdio.h>
#include<stdlib.h>

void rec_fun(char *,char *);
int main()
{
	char *s=malloc(50);
	
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	char *p=s;
	
	while(*p)
		p++;
	p--;
	
	rec_fun(s,p);
	
	printf("%s\n",s);

	return 0;
}

void rec_fun(char *p,char *q)
{
	static char t;
	if(p>q)
		return ;
	t=*p;
	*p=*q;
	*q=t;
	
	rec_fun(p+1,q-1);
}
