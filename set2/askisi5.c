#include <stdio.h>

int print_table(float table[100]);
void swap_numbers(float table[100]);

int main()
{
	int  i;
	float table[100];	

	printf("Give numbers 30 numebrs.\n");
	
	for (i=0; i<30; i++)
		scanf ("%d", &table[i]);
	
      	swap_numbers(table);
	
        print_table(table);
	
}

int print_table(float table[100]) 
{
	int i;
	
	for (i=0; i<30; i++)
        	printf ("%d ", table[i]);
	
	printf("\n");
	
	return table[100];
	
}

void swap_numbers(float table[100])
{
	int i, c, temp;
	
	for (i=0; i<29; i++)
	{	for (c=0; c<29-i; c++)
		{
			if (table[c]>table[c+1])
			{
				temp=table[c];
				table[c]=table[c+1];
				table[c+1]=temp;
				
				print_table(table);
				
			}
		}
	}
}
