#include<stdio.h>
void main()
{
	int i=1,j=20,k=10,r;
	
	//r = i>j ? (i>k ? i:j) : (j>k ? j:k);
	
	r = i>j ? i>k ? i:k : j>k ? j:k ;
	
	printf("%d\n",r);
}
