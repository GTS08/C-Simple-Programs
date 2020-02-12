#include <stdio.h>

int main()
{
	int i, x, y, hcf;
	
	printf("Enter two positive integer numbers.\n");
    	
	do
	{
		scanf("%d %d", &x, &y);
		if (x<=0 || y<=0)
			printf ("Please, enter the two positive integer numbers again.\n");
	}
	while (x<=0 || y<=0);

	for (i=1; i<=x || i<=y; i++)
	{
       		if (x%i==0 && y%i==0)
            		hcf = i;
    	}
    
	printf ("The highest common factor is %d.\n", hcf);
}
