#include<stdio.h>
void main()
{
	char ch[10];
	printf("Enter the string : ");
	scanf("%s",ch);
	
	printf("%s\n",ch);
	
	ch[3]='\0';
	printf("%s\n",ch);
	
}
