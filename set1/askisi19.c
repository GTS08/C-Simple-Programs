#include <stdio.h>

int main()
{
	int n, first=0, second=1, next, i;

	printf ("Give how many elements of Fibonacci sequence you want to show.\n");
	scanf ("%d", &n);

	if (n<=20)
	{	
		for (i=1; i<=n; i++)
		{		
			if (i%5==0)
				printf("%d\n", first);
			else
				printf("%d\t", first);
			next=first+second;
			first=second;
			second=next;	
		}
		printf("\n");
	}
	else 
	{
		for (i=1; i<=20; i++)
                {
			if (i%5==0)
                                printf("%d\n", first);
                        else
                                printf("%d\t", first);
                        next=first+second;
                        first=second;
                        second=next;                      
                }
                printf("\n");

	}
		
}
