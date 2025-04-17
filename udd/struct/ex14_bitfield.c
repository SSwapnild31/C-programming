#include<stdio.h>

struct st
{
	int i;
	unsigned int j:4;
};

void main()
{
	struct st v;
	
	//v.j=7;
	//printf("%d\n",v.j);

	//printf("Enter v.j : ");
	//scanf("%d",&v.j);			//Invalid

	//printf("%ld\n",sizeof(v.j));		//Invalid
	
	//logic to find sizeof bitfield variable
	
	v.j=1;
	int c=0;
	while(v.j)
	{
		v.j=v.j<<1;
		c++;
	}
	printf("bit variable size : %d\n",c);
}
