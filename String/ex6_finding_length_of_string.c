#include<stdio.h>
void main()
{
	char ch[10];
	int i;
	printf("Enter string : ");
	scanf("%s",ch);
	
	for(i=0;ch[i];i++);
	
	printf("length of string %s is %d\n",ch,i);
}
