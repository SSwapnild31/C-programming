#include<stdio.h>
void main()
{
	char s[20];
	printf("Enter string : ");
	scanf("%s",s);
	
	int i;
	for(i=0;s[i];i++)
		printf("%c --> %d %o %x\n",s[i],s[i],s[i],s[i]);
	printf("\n");
}
