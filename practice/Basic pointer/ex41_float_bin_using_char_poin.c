#include<stdio.h>
void main()
{
	float f=23.5;
	char *p;
	p=(char *)&f;
	
	int i,pos;
	
	for(p=(char *)&f,p=p+3;p>=(char *)&f;p--)
	{
		for(pos=7;pos>=0;pos--)
			printf("%d",*p>>pos&1);
		printf(" ");
	}
	
	/*for(i=sizeof(f)-1;i>=0;i--)
	{
		for(pos=7;pos>=0;pos--)
			printf("%d",p[i]>>pos&1);
		printf(" ");
	}*/
	printf("\n");
}
