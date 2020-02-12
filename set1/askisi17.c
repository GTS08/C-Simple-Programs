#include <stdio.h>

int main()
{
	int i, n2, n3, n10;

	printf ("N\t2*N\t3*N\t10*N\n");
	
	for (i=1; i<=10; i++)
	{	
		n2=i*2;
		n3=i*3;
		n10=i*10;
		printf ("%d\t%d\t%d\t%d\n", i, n2, n3, n10);
	}	
}
