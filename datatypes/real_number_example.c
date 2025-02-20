#include<stdio.h>
void main()
{
	//unsigned float f=23.567;			//error: both ‘unsigned’ and ‘float’ in declaration specifiers
	
	float f=89.567;
	double d=456.789;
	long double e=6789.345;	

	printf("f=%f f=%g f=%e\n",f,f,f);
	printf("d=%lf d=%g d=%e\n",d,d,d);
	printf("%.100f\n",f);
	
	printf("e=%Lf e=%Lg e=%Le\n",e,e,e);		//%Lf format specifier is used for long double.
	printf("%ld\n",sizeof(e));
}
