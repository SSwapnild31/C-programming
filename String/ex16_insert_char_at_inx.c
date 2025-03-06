#include<stdio.h>
void main()
{
	char s[9],ch;
	int idx;
	printf("Enter string : ");
	scanf("%s",s);
	printf("Enter char : ");
	scanf(" %c",&ch);
	printf("Enter index : ");
	scanf("%d",&idx);
	
	printf("Before : %s\n",s);
	
	int len,i;
	
	for(len=0;s[len];len++);
	for(i=len+1;i>idx;i--)
		s[i]=s[i-1];
	s[idx]=ch;
	printf("After  : %s\n",s);
}
