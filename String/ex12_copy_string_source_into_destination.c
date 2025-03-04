#include<stdio.h>
void main()
{
	char s[10],d[10];
	printf("Enter string : ");
	scanf("%s",s);
	
	int i;
	printf("s=%s\n\nbefore copy d=%s\n",s,d);
	
	for(i=0;s[i];i++)
		d[i]=s[i];
	d[i]=s[i];
	printf("after copy d=%s\n",d);
}
