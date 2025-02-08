#include<stdio.h>
void main()
{
	int i=5,j=3,k;
	
	//i < j ? k=100 : k=300; //it will generate error(lvalue required)
	
	i < j ? k=100 : (k=300);
	
	printf("%d\n",k);

}
