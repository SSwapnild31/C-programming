#include<stdio.h>
void main()
{
	int i=0;
	
	//for(i=0;i<5;i++)	//i = 0 to 4
	
	//for(;i<5;i++)		//Same o/p
	
	//for(i=0; ; i++)	//here by default condition is true(infinite loop) o/p increment by 1 continious
	
	//for(i=0;i<5;)		//here also(infinite loop) o/p is continious 0

	//for( ; ;)		//infinite loop with zero o/p
	
	for( ; ; ;)		//Invalid / Error
	printf("i=%d\n",i);
}
