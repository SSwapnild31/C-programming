#include<stdio.h>

void main(int argc,char **argv)
{
	FILE *fp;
	fp=fopen(argv[1],"r");
	
	char s[50],ch;
	int c=0,d=0;
	
	while(fgets(s,100,fp))
	{
		c++;
		for(int i=0;s[i];i++)
		{
			if(s[i]>='0' && s[i]<='9')
				d++;
		}
	}
	printf("no of lines: %d  ",c);
	rewind(fp);
	
	c=0;
	while(fscanf(fp,"%s",s)!=EOF)
		c++;
	printf("words: %d  ",c);
	printf("digits: %d\n",d);
}

