#include<stdio.h>

struct st
{
	int rollno;
	char name[20];
	float marks;
};

struct st fun_icf();

void main()
{
	struct st s1=fun_icf();
	
	printf("%d %s %f\n",s1.rollno,s1.name,s1.marks);
}

struct st fun_icf()
{
	struct st v={10,"abcd",75.60};
	
	return v;
}
