#include <stdio.h>

int main()
{
	int n, dig0, dig1, s1, s2, r;
	
	printf ("Give a 2 digit integer number.\n");
	
	do
	{
		scanf ("%d", &n);
		if (n<9 || n>100)
			printf ("Please, give a 2 digit integer number.\n");
	}
	while (n<9 || n>100);
	
		
	dig0=n/10;
	dig1=n%10;
	s1=dig0*1100;
	s2=dig1*11;
	r=s1+s2;
	
	printf ("The result is %d.\n", r);
}
