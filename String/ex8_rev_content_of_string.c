#include<stdio.h>
void main()
{
	char ch[10],t;
	printf("Enter char upto 9 : ");
	scanf("%s",ch);
	
	printf("original string : %s\n",ch);
	int len,i,j;
	for(len=0;ch[len];len++);
	
	for(i=0,j=len-1;i<j;i++,j--)
	{
		t=ch[i];
		ch[i]=ch[j];
		ch[j]=t;
	}
	printf("reverse string : %s\n",ch);
}
