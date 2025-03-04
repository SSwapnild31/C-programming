#include<stdio.h>
void main()
{
	char ch[10];
	printf("Enter string :");
	scanf("%s",ch);
	
	int len,i;
	
	for(len=0;ch[len];len++);
	
	for(i=len-1;i>=0;i--)
		printf("%c",ch[i]);
	printf("\n");
}
