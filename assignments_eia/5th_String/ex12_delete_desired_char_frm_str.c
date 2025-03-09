#include<stdio.h>
void main()
{
	char s[20],ch;
	printf("Enter string : ");
	scanf("%[^\n]",s);
	printf("Enter char to delete : ");
	scanf(" %c",&ch);
	
	int i,j;
	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
		{
			for(j=i;s[j];j++)
				s[j]=s[j+1];
			s[j]=s[j+1];
			i--;
		}
	}
	printf("%s\n",s);
}
