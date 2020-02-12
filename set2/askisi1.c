#include <stdio.h>

int main()
{
	int i, j, count, num[100], freq[100];
	
	printf ("Give 100 integer numbers.\n");

	for (i=0; i<100; i++)
	{
		scanf ("%d", &num[i]);
		freq[i]=-1;
	}
	
	for (i=0; i<100; i++)
	{
		count=1;
		for (j=i+1; j<100; j++)
		{	
			if (num[i]==num[j])
			{
				count++;
				freq[j]=0;
			}
			
			if (freq[i]!=0)
                        {
                                freq[i]=count;
                        }			
		}
	}
	
	for (i=0; i<100; i++)
	{	
		if (freq[i]!=0)
		{
			printf ("%d shows up %d times.\n", num[i], freq[i]);
		}	
	}
	
}
