#include<stdio.h>
#include<stdlib.h>

int main(int argc,char **argv)
{
	FILE *fp1=fopen(argv[1],"r");
	FILE *fp2=fopen(argv[2],"r");
	FILE *fp3=fopen(argv[3],"w");
	
	char *s1=malloc(30);
	char *s2=malloc(30);

	while(1)
	{
		int r1=fscanf(fp1,"%s",s1);
		int r2=fscanf(fp2,"%s",s2);

		if(r1==EOF && r2==EOF)
			break;
		
		if(r1!=EOF)
			fprintf(fp3,"%s ",s1);
		
		if(r2!=EOF)
			fprintf(fp3,"%s ",s2);
	}
	
	return 0;	
}
