#include<stdio.h>
void main()
{
	char s[20];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	int i=0,c=0;
	while(s[i])
	{	
		if(s[i]>='0' && s[i]<='9')
			c++;
		i++;
	}
	printf("digit count : %d\n",c);
}
