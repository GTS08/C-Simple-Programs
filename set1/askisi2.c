#include <stdio.h>
int main()
{
	int i;
	i = 1;	
	while(i<=100)
	{
	
		if (i%5==0)
			printf("%d\n", i);
		else
			printf("%d 	", i);	
		i=i+1;
	}
	
}
