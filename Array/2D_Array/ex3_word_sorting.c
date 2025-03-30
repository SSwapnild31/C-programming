#include<stdio.h>
#include<string.h>

void main()
{
	char s[4][10],t[10];
	int ele,i,j;
	ele=sizeof(s)/sizeof(s[0]);
	
	printf("Enter the strings :\n");
	for(i=0;i<ele;i++)
		scanf("%s",s[i]);
	
	printf("Before : ");
	for(i=0;i<ele;i++)
		printf("%s ",s[i]);
	printf("\n");

	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(strcmp(s[j],s[j+1])>0)
			{
				strcpy(t,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],t);
			}
		}
	}

	printf("after : ");
	for(i=0;i<ele;i++)
		printf("%s ",s[i]);
	printf("\n");
	
}
