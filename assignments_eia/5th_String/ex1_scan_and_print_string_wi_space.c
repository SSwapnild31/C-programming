#include<stdio.h>
void main()
{
	char ch[15];
	printf("Enter an string : ");
	scanf("%[^\n]",ch);
	
	printf("%s\n",ch);
}
