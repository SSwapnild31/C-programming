#include<stdio.h>
void main()
{
	char s[20],t;
	printf("Enter String : ");
	scanf("%[^\n]",s);
	
	int i,j;
	for(i=0,j=2;i<j;i++,j--)
	{
		t=s[j];
		s[j]=s[i];
		s[i]=t;
	}
	printf("%s\n",s);
}
