#include <stdio.h>
#include <math.h>
int main()

{

float x1, y1;
float x2, y2;

printf ("Give the cordinates for the first point\n");
scanf ("%f %f", &x1, &y1);
printf ("Give the cordinates for the second point\n"); 
scanf ("%f %f", &x2, &y2);

float x=x1-x2;
float y=y1-y2;
float px=pow(x,2);
float py=pow(y,2);
float sp=px+py;
float dis;
dis=sqrt(sp);

printf ("The distance is %f\n", dis);

}
