#include<stdio.h>
void main()
{
	char ch[10];
	printf("Enter String : ");
	scanf("%[^\n]",ch);
	
	printf("%s\n",ch);
}
