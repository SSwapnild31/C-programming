#include<stdio.h>
void main()
{
	char ch[10];
	printf("Enter string : ");
	scanf("%s",ch);
	
	int i,count=0;
	
	for(i=0;i<ch[i];i++)
	{
		if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
			count++;
	}
	printf("count of voewls in string is %d\n",count);
}
