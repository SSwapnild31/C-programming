#include<stdio.h>
#include<stdlib.h>

void my_strcpy(char *,char *);
void main()
{
	char *s,*d;
	
	s=malloc(30);
	d=malloc(30);
	
	printf("Enter string : ");
	scanf("%[^\n]",s);

	printf("before d : %s\n",d);
	
	my_strcpy(d,s);
	
	printf("after d : %s\n",d);
}

void my_strcpy(char *d, char *s)
{
	if(!*s)
		return ;
	*d++=*s++;
	my_strcpy(d,s);
}
