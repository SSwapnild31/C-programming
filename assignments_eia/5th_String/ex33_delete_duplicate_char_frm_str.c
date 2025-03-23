#include<stdio.h>
void main()
{
	char s[30];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	for(int i=0;s[i];i++)
	{
		for(int j=i+1;s[j];j++)
		{
			if(s[i]==s[j])
			{
				for(int k=j;s[k];k++)
					s[k]=s[k+1];
				j--;
			}
		}
	}
	printf("%s\n",s);
}
