#include<stdio.h>
#include<stdlib.h>

int rec_fun(char *,char);
int main()
{
	char *s=malloc(50);
	char ch;
	
	printf("Enter string : ");
	scanf("%[^\n]",s);
	printf("Enter character : ");
	scanf(" %c",&ch);
	
	int count=rec_fun(s,ch);
	
	printf("count : %d\n",count);
	
	return 0;
}

int rec_fun(char *p,char ch)
{
	if(!*p)
		return 0;
	
	if(*p==ch)
		return 1+rec_fun(p+1,ch);
	return rec_fun(p+1,ch);
}
