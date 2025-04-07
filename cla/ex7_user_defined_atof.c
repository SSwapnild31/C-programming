#include<stdio.h>
#include<stdlib.h>

int my_atof(const char*);
void main(int argc,char **argv)
{
	float num;
	//num=atof(argv[1]);
	//printf("num=%f\n",num);
	
	num=my_atof(argv[1]);
	printf("num=%f\n",num);
}

int my_atof(const char *p)
{
	if(p[i]=='+' || p[i]=='-')
		i=1;
	else 
		i=0;
	for( ; p[i] ; i++)
	{
		if(p[i]!='.')
	}
}
