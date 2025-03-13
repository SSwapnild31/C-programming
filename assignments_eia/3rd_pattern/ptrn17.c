/*
2
2 3
2 3 5
2 3 5 7
2 3 5 7 11
*/

#include<stdio.h>
void main()
{
	int i,j,k,num;
	for(i=0;i<5;i++)
	{
		for(j=0,num=2;j<=i;num++)
		{
			for(k=2;k<num;k++)
			{
				if(num%k==0)
					break;
			}
			if(num==k)
			{
				printf("%d ",num);
				j++;
			}
		}
		printf("\n");
	}
	
}
