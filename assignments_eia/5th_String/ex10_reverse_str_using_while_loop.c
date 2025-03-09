#include<stdio.h>
void main()
{
	char s[20],t;
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	int len,i;
	for(len=0;s[len];len++);
	i=0;
	while(i<len)
	{
		t=s[len-1];
		s[len-1]=s[i];
		s[i]=t;
		
		i++;
		len--;
	}
	printf("%s\n",s);
}
