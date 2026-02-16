#include<stdio.h>
#include<stdlib.h>

typedef struct data{
	int roll;
	char name[20];
	float marks;
}data;

int main()
{
	data *dptr = malloc(sizeof(data));

	printf("Enter rollno, name and marks\n");
	scanf("%d%s%f",&dptr->roll, dptr->name, &dptr->marks);

	printf("%d %s %.2f\n",dptr->roll,dptr->name,dptr->marks);
	
	return 0;
}
