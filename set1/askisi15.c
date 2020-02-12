#include <stdio.h>

int main()

{

	int n, rev=0;
	
	printf ("Give a 5 digit integer number to reverse.\n");
	
	do
	{	scanf ("%d", &n);
		if (n<9999 || n>100000)
			printf ("Please, give a 5 digit integer number.\n");
			
	}
		while (n<9999 || n>100000);

	while (n!=0)
	{
		rev=rev*10;
		rev=rev+n%10;
		n=n/10;
	}
	
	printf ("The reversed number is %d.\n", rev);

	return 0;

}
