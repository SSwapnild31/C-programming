#include<stdio.h>
int main()
{
	/*char *p = "Hai friends",  *p1 = p;
	while(*p!='\0')
		++*p++;
	printf("%s  %s\n",p,p1);*/

	/*char *str = "hello, world\n";
	str[5] = '.';
	printf("%s\n", str);
	return 0;*/
	
	/*char *str = "hello world";
	char strary[] = "hello world";
	printf("%d %d\n", sizeof(str), sizeof(strary));
	return 0;*/
	
	/*char *str = "hello world";
	char strary[] = "hello world";
	printf("%d %d\n", strlen(str), strlen(strary));
	return 0;*/
	
	/*int a = 5,b = 4,c = 9;
	*(a>b ? &a : &b) = (a+b)>c;
	printf("%d  %d\n",a,b);*/
	
	/*int i;
	double a = 5.5;
	char *ptr;
	ptr = (char *)&a;
	for(i=0;i<=7;i++)
	printf("%d\n",*ptr++);
	return 0;*/
	
	/*char a[20]; 
	char *p,*q; 
	p=&a[0];  
	q=&a[10]; 
	printf("%d \n",q-p ); */
	
	int a[5]={1,2,3,4,5}; 
	int *ptr=(int *)(&a+1); 
	printf("%d %d\n",*(a+1),*(ptr-1)); 
	printf("%d %d\n",*(a+1),*(ptr));
	
}
