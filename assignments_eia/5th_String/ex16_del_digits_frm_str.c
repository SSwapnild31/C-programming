#include<stdio.h>

void main()
{
	char s[20];
	printf("Enter a string : ");
	scanf("%[^\n]",s);
	

	int i,j;
	for(i=0;s[i];i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			for(j=i;s[j];j++)
				s[j]=s[j+1];
			i--;
		}
	
	}
	printf("%s\n",s);
}
