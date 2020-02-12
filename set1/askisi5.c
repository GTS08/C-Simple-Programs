#include <stdio.h>

int main()

{
	int i, n, j, number, number1, times;

	printf ("Give size of sequence\n");
	scanf ("%d", &n);

	number=number1;

	printf ("Give your numbers of sequence\n");

	for (i=1; i<=n; i++)
	{	
		scanf ("%d", &number);
		if (number==number1)
			times++;
		else if (number!=number1)
			times=1;
		
	}
	
	printf ("The result is %d.\n", number);
}
