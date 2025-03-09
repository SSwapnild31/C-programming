#include<stdio.h>
void main()
{
	char ch[20];
	printf("Enter string : ");
	scanf("%[^\n]",ch);
	
	int i,pos;
	
	for(i=0;ch[i];i++)
	{
		printf("%c --> ",ch[i]);
		for(pos=31;pos>=0;pos--)
			printf("%d",ch[i]>>pos&1);
		printf("\n");
	}
}
