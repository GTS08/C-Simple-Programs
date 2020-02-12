#include <stdio.h>
#include <math.h>
int main()

{

float a, b, c, d, y, y1, y2;

printf("Give three coefficients for secondary equation\n");
scanf ("%f%f%f", &a, &b, &c);

d=pow(b,2)-4*a*c;

if (a!=0)
{
	if (d>0)
		{
		y1=(-b+sqrt(d))/2*a;
		y2=(-b-sqrt(d))/2*a;
		printf ("The results of the equation are y1=%f y2=%f\n", y1, y2);
		}
	else if (d==0)
		{
		y=-b/2*a;
		printf ("The result of the equation is %f\n", y);
		}
	else 
		printf ("The are no results for this equation\n");

	printf ("The equation is %d x^2 + %dx + %d = 0", a,b,c);
}

if (a==0 && b!=0)
{
	y=-c/b;
	printf ("The equation is % dx+ %d = 0", b, c);
}

if (a==0 && b==0 && c!=0)
	printf ("The equation is impossible\n", c);

else
	printf ("The equation has infinite solutions\n");

}
