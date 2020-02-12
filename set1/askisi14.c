#include <stdio.h>
#include <math.h>

main()

{

	int i, n, seq;
	seq=0;

	do
	{
		printf ("Give a positive integer number below 10.\n");
		scanf ("%d", &n); 
	}
	while (n>10 || n<0);

	for (i=0; i<=n; i++)
		seq=seq+pow(4*i,2);
	
	printf ("The result is %d.\n", seq); 

}
