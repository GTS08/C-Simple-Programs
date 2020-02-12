#include <stdio.h>
#include <math.h>
int main()
{

int x, y, sum, max, p;
float lx, ly;

printf ("Give two integral numbers\n");
scanf ("%d%d", &x, &y);

sum=x+y;

if (x>y)
	max=x;
else
	max=y;

p=pow(x,y);

lx=log10(x);
ly=log10(y);

printf ("The sum of numbers is %d\n", sum);
printf ("The maximun number is %d\n", max);
printf ("The x power to y is %d\n", p);
printf ("The log10(x) is %f\n", lx);
printf ("The log10(y) is %f\n", ly); 

}
