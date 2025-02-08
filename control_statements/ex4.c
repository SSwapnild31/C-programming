#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the char : \n");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	printf("ch=%c it's ASCII is %d\n",ch,ch);
}
