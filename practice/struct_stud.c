#include <stdio.h>
#include <stdlib.h>

typedef struct sub_name{
    int math;
    int english;
    int science;
}sub_name;

typedef struct student{
    int roll_no;
    char name[20];
    sub_name sub;
}student;

student *set_data(){

    student *ptr = malloc(sizeof(student));
    
    printf("Enter data\n");
    printf("------------------------\n");
    printf("name    : ");
    scanf("%[^\n]",ptr->name);
    printf("roll_no : ");
    scanf(" %d",&ptr->roll_no);
    printf("math    : ");
    scanf(" %d",&ptr->sub.math);
    printf("english : ");
    scanf(" %d",&ptr->sub.english);
    printf("science : ");
    scanf(" %d",&ptr->sub.science);
    printf("------------------------\n");
    
    return ptr;
}

void get_data(student *sptr){
    printf("student data\n");
    printf("------------------------\n");
    printf("name    : %s\n",sptr->name);
    printf("roll_no : %d\n",sptr->roll_no);
    printf("math    : %d\n",sptr->sub.math);
    printf("english : %d\n",sptr->sub.english);
    printf("science : %d\n",sptr->sub.science);
    printf("------------------------\n");
}


int main(){
    
    student *stud;
    stud = set_data();
    get_data(stud);
    free(stud);

    return 0;
}
