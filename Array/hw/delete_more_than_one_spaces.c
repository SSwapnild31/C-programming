#include<stdio.h>

void main()
{
	char s[100];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	printf("before : %s\n",s);
	
	int i,j;
	for(i=0;s[i];i++)
	{
		if(s[i]==' ' && s[i+1]==' ')
		{
			for(j=i+1;s[j];j++)
				s[j]=s[j+1];
			i--;
		}
	}

	printf("after  : %s\n",s);
}
