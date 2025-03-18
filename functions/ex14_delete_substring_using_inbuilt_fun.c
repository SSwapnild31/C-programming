#include<stdio.h>
#include<string.h>

void main()
{
	char m[100],s[50];
	printf("Enter string : ");
	scanf("%[^\n]",m);
	printf("Enter substring : ");
	scanf("%s",s);
	
	char *p,*q;
	p=m;
	
	printf("Before : %s\n",m);

	while(q=strstr(p,s))
		strcpy(q,q+strlen(s));

	printf("After : %s\n",m);	
}
