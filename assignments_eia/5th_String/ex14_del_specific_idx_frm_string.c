#include<stdio.h>

void main()
{
	char s[20];
	int idx;
	printf("Enter string : ");
	scanf("%[^\n]",s);
	printf("Enter idx : ");
	scanf("%d",&idx);
	
	int i;
	for(i=idx;s[i];i++)
		s[i]=s[i+1];
	s[i]='\0';
	
	printf("After delete : %s\n",s);
}
