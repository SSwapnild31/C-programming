#include<stdio.h>
#include<stdlib.h>
struct st{
	int roll;
	char name[50];
};

int main()
{
	struct st *p = malloc(sizeof(struct st));
	printf("Enter rollno & name\n");
	scanf("%d %s",&p->roll, p->name);
	
	printf("%d %s\n",p->roll, p->name);
	
	return 0;
}
