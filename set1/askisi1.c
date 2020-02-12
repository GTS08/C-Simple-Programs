#include <stdio.h>
int main ()
{
	int x=3;
	int y=3;
	int z=1;
	int w=15;
	int a=14;
	int b=3;
	printf("res = %d\n", y+z/x);
	printf("res = %d\n", w*x/y/x);
	printf("res = %d\n", w/x*++z+x/y);
	printf("res = %d\n", ++b, --a);
	printf("res = %d\n", (--b, ++a));
	printf("res = %d\n", (a>b)?b:a);
}
