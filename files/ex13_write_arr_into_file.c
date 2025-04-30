#include<stdio.h>

void main()
{
	FILE *fp=fopen("data","w");
	
	int arr[5]={1,3,5,7,9};
	
	for(int i=0;i<5;i++)
		fprintf(fp,"%d ",arr[i]);
}
