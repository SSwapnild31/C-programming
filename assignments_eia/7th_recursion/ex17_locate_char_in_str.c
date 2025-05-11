#include<stdio.h>
#include<stdlib.h>

char *my_strchr(char *,char);
void main()
{
	char *s,ch;
	s=malloc(25);
	
	printf("Enter string : ");
	scanf("%[^\n]",s);
	printf("Enter char to search : ");
	scanf(" %c",&ch);
	
	if(my_strchr(s,ch))
		printf("char is present\n");
	else
		printf("char not present..!\n");	
}

char *my_strchr(char *p,char ch)
{
	if(*p==0)
		return 0;
	if(*p==ch)
		return p;
	my_strchr(p+1,ch);
}
