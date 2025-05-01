#include<stdio.h>

typedef struct st
{
	int rollno;
	char name[20];
	float marks;
}ST;

void main()
{
	FILE *fp=fopen("data","w");
	
	ST v={74,"Swapnil",85.5};
	
	fwrite(&v,28,1,fp);
}
