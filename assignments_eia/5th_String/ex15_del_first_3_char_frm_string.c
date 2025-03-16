#include<stdio.h>

void main()
{
	char s[20];
	printf("Enter string :");
	scanf("%[^\n]",s);
	
	//printf("%s\n",s);

	int i,j;

	for(i=0;s[i+3];i++)
		s[i]=s[i+3];
	s[i]='\0';
	printf("%s\n",s);
}
