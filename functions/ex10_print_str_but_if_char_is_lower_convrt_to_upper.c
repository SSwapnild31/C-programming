#include<stdio.h>

void str_rup(char *);

void main()
{
	char s[10];
	printf("Enter string : ");
	scanf("%s",s);
	
	printf("before : %s\n",s);
	str_rup(s);
	printf("after : %s\n",s);
}

void str_rup(char *s)
{
	int i;
	for(i=0;s[i];i++)
	{
		if(s[i]>='a' && s[i]<='z')
			s[i]=s[i]-32;		//s[i]=s[i]^32;
	}
}
