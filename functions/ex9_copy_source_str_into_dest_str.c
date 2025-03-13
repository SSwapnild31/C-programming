#include<stdio.h>

void my_strcpy(char *,char *);

void main()
{
	char s[10],d[10];
	printf("Enter string : ");
	scanf("%s",s);
	
	printf("before : %s\n",d);
	my_strcpy(d,s);
	printf("after : %s\n",d);
}

void my_strcpy(char *d,char *s)
{
	/*int i;
	for(i=0;s[i];i++)
		d[i]=s[i];
	d[i]=s[i];*/
	
	/*while(*s)
	{
		*d=*s;
		s++;
		d++;
	}
	*d=*s;*/
	
	while(*s)
		*d++=*s++;
	*d=*s;
}
