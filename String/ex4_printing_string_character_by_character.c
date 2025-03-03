#include<stdio.h>
void main()
{
	char ch[10];
	int i;
	printf("Enter the String : ");
	scanf("%[^\n]",ch);
	
	//printf("%s\n",ch);
	
	//for(i=0;i<10;i++)		//this condition is wrong 
	//for(i=0;ch[i]!='\0';i++)
	for(i=0;ch[i];i++)
		printf("%c ",ch[i]);
	printf("\n");
}
