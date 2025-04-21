#include<stdio.h>
#include<string.h>
typedef struct st
{
	int rollno;
	char name[10];
	float marks;
}ST;			// ST is another name to struct st datatype

//struct st v;

typedef struct st v;	// another variable to struct st datatype

void main()
{
	ST a;
	a.rollno=5;
	strcpy(a.name,"abcd");
	a.marks=85.5;
	
	printf("%d %s %f\n",a.rollno,a.name,a.marks);
}
