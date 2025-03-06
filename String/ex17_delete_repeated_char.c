#include<stdio.h>
void main()
{
	char s[10];
	printf("Enter string : ");
	scanf("%s",s);
	
	printf("Before : %s\n",s);
	
	int i,j,k;
	
	for(i=0;s[i];i++)
	{
		for(j=i+1;s[j];j++)
		{
			if(s[i]==s[j])
			{
				for(k=j;s[k];k++)	
					s[k]=s[k+1];
				j--;
			}
		}
	}
	printf("After : %s\n",s);
	
}
