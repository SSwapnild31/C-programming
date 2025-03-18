#include<stdio.h>
void main()
{
	/*int a[4]={1,2,3,4};
	int *p=a+3;
	printf("%d\n",p[-2]);*/
	
	/*char *s="hello";
        char *p=s+2;
        printf("%c\t%c\n",*p,s[1]);*/
	
	/*void *p;
	int a[4] = {1, 2, 3, 4};
	p = &a[3];
	int *ptr = &a[2];
	int n = (int*)p - ptr;
	printf("%d\n", n);*/

	/*int a[] = {10,20,30,40,50},i;
	char *p = a;

	for(int i=0;i<5;i++)
		printf("%d\n",i,*p++);*/
	
	/*int a[]={10,20,30,40,50}; 
	char *p; 
	p=(char *)a;
	printf("%d\n",*((int *)p+4)); */
	
	/* double *ptr = (double *)100;
         ptr = ptr + 2;
         printf("%u\n", ptr);*/
	
	/*int i = 10;
        void *p = &i;
        printf("%d\n",(int *)*p);*/
	
	
	int a[4] = {1, 2, 3, 4};
            int *p = &a[1];
            int *ptr = &a[2];
            int n = 1;
            n = ptr - p;
            printf("%d\n", n);
}













