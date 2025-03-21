#include<stdio.h>
void main()
{
	char s[20];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	for(int i=0;s[i]!=' ' && s[i]!='\0';i++)
		printf("%c",s[i]);
	printf("\n");
}
