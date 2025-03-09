#include<stdio.h>
void main()
{
	char s[20];
	printf("Enter stding : ");
	scanf("%[^\n]",s);
	
	int i,pos,count;
	for(i=0;s[i];i++)
	{
		printf("%c ---> ",s[i]);
		for(pos=0,count=0;pos<=31;pos++)
			if(s[i]>>pos&1)
				count++;
		printf("count : %d\n",count);	
	}
}
