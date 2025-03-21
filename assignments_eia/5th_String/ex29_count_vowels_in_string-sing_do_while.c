#include<stdio.h>

void main()
{
	char s[30];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	int i,count=0;
	for(i=0;s[i];i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
	count++;
	}
	
	printf("vowels count : %d\n",count);
}
