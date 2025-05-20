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

	if(!fp1)
	{
		printf("file opening error..!\n");
		return 1;
	}
		
	int i;
	int buff_size=max_length(fp1)+1;

	char **str;
	
	std=malloc(sizeof(char*)*buff_size);
	
	for(i=0;i<buff_size;i++)
		str[i]=malloc(buff_size);
	
	for(i=0;i<buff_size;i++)
	{
		if(fgets(str[i],buff_size,fp1)!=EOF)
		{
			
		}
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
