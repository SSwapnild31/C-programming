#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n,i;
	printf("Enter arr size : ");
	scanf("%d",&n);
	
	int *p;
	p=calloc(n,sizeof(int));
	
	printf("Enter %d arr ele's",n);
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	
	int s=p[0],ss;
	
	for(i=0;i<n;i++)
	{
		if(p[i]>s)
		{
			ss=s;
	 		s=p[i];
		}
		else if(p[i]>ss && p[i]<s)
			ss=p[i];
	}
	
	printf("second largest ele : %d\n",ss);
}
