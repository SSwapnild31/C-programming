//Write a Program in C to set 3rd and 2nd bit .

#include<stdio.h>
void main()
{
	int num,pos;
	printf("Enter int num : ");
	scanf("%d",&num);
	
	num = num | 1 << 3;		//set 3rd bit
	num = num | 1 << 2;		//set 2nd bit
		
	/*for(pos=3;pos>=2;pos--)	//using for loop
	{
		num=num|1<<pos;
	}*/

	printf("%d\n",num);
}
