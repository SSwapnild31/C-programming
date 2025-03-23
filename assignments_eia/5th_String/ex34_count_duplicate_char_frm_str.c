#include<stdio.h>

void main()
{
	char s[30];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	int i,j,c;
	for(i=0;s[i];i++)
	{
		for(j=i+1,k=i-1;s[j];j++,k--)
		{
			if(s[i]==s[j] )
				
			
		}
		printf("%d\n",c);
	}
}
