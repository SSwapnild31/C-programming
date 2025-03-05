#include<stdio.h>
void main()
{
	char s1[15],s2[15];
	printf("Enter two strings:\n");
	scanf("%s%s",s1,s2);
	
	int len,i,j;
	printf("before : s1=%s s2=%s\n",s1,s2);	
	
	for(len=0;s1[len];len++);
	
	for(i=0,j=len;s2[i];i++,j++)
		s1[j]=s2[i];
	s1[j]=s2[i];		//s1[i]='\0';

	printf("after : s1=%s s2=%s\n",s1,s2);	
	
}
