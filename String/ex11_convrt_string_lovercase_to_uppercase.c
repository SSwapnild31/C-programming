#include<stdio.h>
void main()
{
	char ch[10];
	printf("Enter string : ");
	scanf("%s",ch);
	
	printf("original string : %s\n",ch);
	int i;
	for(i=0;ch[i];i++)
	{
		if(ch[i]>='a' && ch[i]<='z')
			ch[i]=ch[i]-32;
	}
	printf("after uppercase : %s\n",ch);
}
