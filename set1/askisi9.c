#include <stdio.h>
int main()

{

float F;
float C;

printf ("Give temperture in Fahrenheit \n");
scanf ("%f", &F);

C=(5.0/9.0)*(F-32.0);
printf("The temperture in Celsius is %.1f\n", C);

}
