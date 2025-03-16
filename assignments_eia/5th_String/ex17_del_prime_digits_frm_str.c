#include<stdio.h>

void main()
{
	char s[20];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	int i,j,k;
	for(i=0;s[i];i++)
	{
		if(s[i]>='2' && s[i]<='9')
		{
			for(j=2;j<s[i];j++)
			{
				if((s[i]-'0')%j==0)
					break;
			}
			if((s[i]-'0')==j)
			{
				for(k=i;s[k];k++)
					s[k]=s[k+1];
				i--;
			}
		}		
	}
	printf("%s\n",s);
}
