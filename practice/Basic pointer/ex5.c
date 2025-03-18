#include<stdio.h>

void main()
{
	/*int a=0x12345678; 
	void *ptr; 
	ptr=&a; 
	printf("0x%x\n",*(int *)&*&*(char*)ptr); */
	
	/*char *s= "hello";
	char *p = s;
	printf("%c\t%c", 1[p], s[1]);*/
	
	/*char a[]="abcde";
	char *p=a;
	p++;
	p++;
	p[2]='z';
	printf("%s",p);*/
	
	/*char a[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i,*p = a;
	for(i=0;i<5;i++)
		printf("%d\t",*p++);*/


	char *str1 = "Hello";
	char *str2 = "Hai";
	char *str3;
	str3=strcat(str1,str2);
	printf("%s  %s\n",str3,str1);
	

}
