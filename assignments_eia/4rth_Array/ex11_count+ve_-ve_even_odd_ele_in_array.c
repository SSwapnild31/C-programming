#include<stdio.h>
void main()
{
	int a[10],ele,i;
	
	ele = sizeof(a)/sizeof(a[0]);
	
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	printf("array ele are : ");
	for(i=0;i<ele;i++)
		printf("%d ",*(a+i));
	printf("\n");
	
	int even=0,odd=0,pos=0,neg=0;
	
	for(i=0;i<ele;i++)
	{
		if(a[i]>0)
		{
			pos++;
			if(a[i]%2==0)
				even++;
			else
				odd++;
		}
		else
			neg++;
	}
	
	printf("+ve : %d -ve : %d even : %d odd : %d\n",pos,neg,even,odd);
}
