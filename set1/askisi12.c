#include <stdio.h>

int main()

{

int o;
float m, in, eu, dr;

printf ("If you want to convert meters to inches press 1.\n");
printf ("If you want to convert euros to drachmas press 2.\n");


do
	{
	scanf ("%d",&o);
		if (o!=1 && o!=2)
			printf ("Give the value again.\n");	
	}
	while (o!=1 && o!=2);

if (o==1)
	{        
	printf ("Give the value in meters.\n");
	scanf ("%f", &m);
	in=m/0.0254;
	printf ("%f meters equals %f inches.\n", m, in);
	}
else
        {
	printf ("Give the value in euros.\n");
	scanf ("%f", &eu);
	dr=eu*340.75;
	printf ("%f euros equals %f drachmas.\n", eu, dr);
	}
}
