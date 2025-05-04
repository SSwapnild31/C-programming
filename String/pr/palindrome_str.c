#include<stdio.h>
#include<stdlib.h>

int pal_str(const char *);
void main()
{
	char *s=malloc(30);
	
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	if(pal_str(s))
		printf("Yes..\n");
	else
		printf("No..!\n");
}

int pal_str(const char *p)
{
	const char *q=p;
	
	while(*q)
		q++;
	q--;

	while(p<q)
	{
		if(*p!=*q)
			return 0;
		p++;
		q--;
	}
	return 1;
}
