#include<stdio.h>

void main()
{
	char s[30];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	int i=0,j;
	while(s[i])
	{
		if(s[i]==' '&& s[i+1]==' ')
		{
			for(j=i+1;s[j];j++)
				s[j-1]=s[j];
			s[j-1]=s[j];
			i--;
		}
		i++;
	}
	
	printf("%s\n",s);
}
