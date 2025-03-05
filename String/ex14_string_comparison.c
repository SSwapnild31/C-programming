#include<stdio.h>
void main()
{
	char s1[10],s2[10];
	printf("Enter two strings\n");
	scanf("%s%s",s1,s2);
	
	int i;
	
	for(i=0;s1[i] && s2[i];i++)		//s1[i] //s2[i]
	{
		if(s1[i]!=s2[i])
			break;
	}
	if(s1[i]==s2[i])
		printf("equal..\n");
	else
		printf("not equal..\n");
}
