#include <stdio.h>
#include <stdlib.h>

int sum_col(int c, int r, int a, int b, int table[a][b]);

int main()
{
        int r, c, i, k, j, sum;

        printf ("Enter the rows and columns of the table.\n");

        printf ("Enter the rows.\n");
        scanf ("%d", &r);

        printf ("Enter the columns.\n");
        scanf ("%d", &c);

        int **table = (int**) malloc(r*sizeof(int*));
	for (i=0; i<r; i++)
		table[i] = (int*) malloc(c*sizeof(int));	

        printf ("Enter integer numbers.\n");

        for (i=0; i<r; i++)
        {
                for (k=0; k<c; k++)
                {
                        scanf ("%d", &table[i][k]);
                }
        }
	
  	
	int sum_col (int c, int  r, int  i, int k, int table[i][k]);		

	printf ("%d\n", sum_col);	
}

sum_col(int c, int r, int a, int b, int table[a][b])
{
	int i, k, sum, sumcol[c];
	
	for (k=0; k<c; k++)
        {
                sum=0;
                for (i=0; i<r; i++)
                        sum = sum + table[i][k];
                return sumcol[k]=sum;
        }
}
