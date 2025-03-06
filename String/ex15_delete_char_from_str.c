#include<stdio.h>
void main()
{
	char s[10],ch;
	printf("Enter string : ");
	scanf("%s",s);
	printf("Enter char : ");
	scanf(" %c",&ch);
	
	printf("Before : %s\n",s);
	
	int len,i,j;
	
	for(len=0;s[len];len++);
	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
		{
			for(j=i;s[j];j++)
				s[j]=s[j+1];
			//i--;
		}	
	}
	printf("After : %s\n",s);
}
