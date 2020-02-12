#include <stdio.h>

int main()
{
	int a, b, c, d, max, max2, sum;
	
	printf ("Give 4 integer numbers.\n");
	
	scanf ("%d %d %d %d", &a, &b, &c, &d);

	if (a>b && a>c && a>d)
		max=a;
	else if (b>a && b>c && b>d)
		max=b;
	else if (c>a && c>b && c>d)
		max=c;
	else if (d>a && d>b && d>c)
		max=d;
	
	if (a<b && a>c && a>d || a>b && a<c && a>d || a>b && a>c && a<d)
                max2=a;
        else if (b<a && b>c && b>d || b>a && b<c && b>d || b>a && b>c && b<d)
                max2=b;
        else if (c>a && c>b && c>d || c>a && c<b && c>d || c>a && c>b && c<d)
                max2=c;
        else if (d>a && d>b && d>c || d>a && d<b && d>c || d>a && d>b && d<c)
                max2=d;		
	
	sum=max+max2;	
	
	printf ("The biggest sum of a pair of numbers is %d.\n", sum);
}
