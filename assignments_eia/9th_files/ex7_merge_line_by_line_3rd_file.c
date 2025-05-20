#include<stdio.h>
#include<stdlib.h>

int max_length(FILE *);
int main(int argc,char **argv)
{
	
	if(argc!=4)
	{
		printf("file are not sufficient..!\n");
		return 1;
	}

	FILE *fp1=fopen(argv[1],"r");
	FILE *fp2=fopen(argv[2],"r");
	FILE *fp3=fopen(argv[3],"w");

	if(!fp1 || !fp2 || !fp3)
	{
		printf("file opening error..!\n");
		return 1;
	}
		
	
	int len1=max_length(fp1);
	int len2=max_length(fp2);
	
	int buff_size=(len1 > len2 ? len1 : len2) + 1 ;
	
	char *s1=malloc(buff_size);
	char *s2=malloc(buff_size);
	
	while(1)
	{
		char *line1=fgets(s1,buff_size,fp1);
		char *line2=fgets(s2,buff_size,fp2);
	
		if(!line1 && !line2)
			break;
		
		if(line1)
			fputs(s1,fp3);
		if(line2)
			fputs(s2,fp3);
	}
	
	free(s1);
	free(s2);
	
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	
	return 0;
}
int max_length(FILE *fp)
{
	int c=0,c1=0,ch1;
	
	while((ch1=fgetc(fp))!=EOF)
	{
		c++;
		if(ch1=='\n')
		{
			if(c>c1)
				c1=c;
			c=0;
		}
	}
	if(c>c1)
		c1=c;

	rewind(fp);
	
	return c1;
}
