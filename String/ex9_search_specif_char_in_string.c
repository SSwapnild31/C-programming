#include<stdio.h>
void main()
{
	char a[10],s;
	printf("Enter string : ");
	scanf("%s",a);
	printf("Enter char to search : ");
	scanf(" %c",&s);
	
	int len,i;
	for(len=0;a[len];len++);
	for(i=0;i<len-1;i++)
	{
		if(a[i]==s)
		{
			printf("char is present..\n");
			return;
		}
	}
	printf("char is not present..!\n");
}
