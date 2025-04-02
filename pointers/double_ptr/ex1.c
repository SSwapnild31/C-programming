#include<stdio.h>

void print(int,int,char (*)[]);
void print1(int,char**);

void main()
{
	char s[][10]={"abcd","efgh","ijkl"};
	char *p[]={"ABCD","EFGH","IJKL"};
	
	print(3,10,s);
	print1(3,p);
}

void print1(int r,char **p)
{
	for(int i=0;i<r;i++)
		printf("%s\n",p[i]);
}

void print(int r,int c,char (*p)[c])
{
	for(int i=0;i<r;i++)
		printf("%s\n",p[i]);
}
