#include<stdio.h>
void main()
{
	int i,j,k,s;
	for(i=0;i<6;i++)
	{
		for(j=0,k=1,s=0;j<6-i;j++)
		{
			if(j==0)
				printf("%d ",s=j+1);
			else
				printf("%d ",s+=k++);
		}
		printf("\n");
	}

}
