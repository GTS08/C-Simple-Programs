#include <stdio.h>

int main()
{
	int primes[100];
	int n, i, j;

	printf ("Give N.\n");
	scanf ("%d", &n);

	for (i=2; i<n; i++)
		primes[i]=1;
	
	for (i=2; i<n; i++)
	{
		if (primes[i]==1)
		{	
			for (j=i; i*j<n; j++)
				primes[i*j]=0;
		}	
	}
	
	printf ("The prime numbers from 2 to N are\n");
	
	for (i=2; i<n; i++)
	{
		if (primes[i]==1)
			printf ("%d\n", i);
	}
			
	return 0;
}
