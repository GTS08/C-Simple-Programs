#include <stdio.h>
#include <math.h>

int main()
{
	//First method.
	
	int n, i, sum;
	
	printf ("Give a number to count the sum.\n");
	scanf ("%d", &n);
	
	
	
	for (i=1; i<=n; i++)
		sum=sum+pow(i,3); 
	
	printf ("The sum is %d.\n", sum);
	
	//Second method.
	
	while (i<=n)
	{
		sum=sum+pow(i,3);
		i++;
	}
	printf ("The sum is %d.\n", sum);
	
	//Third method.
			
	do
	{	
		printf ("The sum is %d.\n", sum);
		sum=sum+pow(i,3);
		i++;
	}
	while (i<=n);
}
