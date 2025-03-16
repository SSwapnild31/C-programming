#include<stdio.h>
#include<string.h>

void main()
{
	char s[15],ch;
	int idx,i,len;
	printf("Enter string : ");
	scanf("%s",s);
	printf("Enter idx : ");
	scanf("%d",&idx);
	printf("Enter char : ");
	scanf(" %c",&ch);
	
	len=strlen(s);
	for(i=len;i>s[idx];i--)
		s[i-1]=s[i];
	
	s[idx]=ch;
	
	printf("%s\n",s);
	
}
