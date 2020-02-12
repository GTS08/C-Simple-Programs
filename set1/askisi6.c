#include <stdio.h>
#include <math.h>
int main()
{

//a

int n, x, i;
int a=2;

printf("Give the n term\n");
scanf("%d", &n);

for (i=1; i<=n; i++)
	 a=pow(a,5)-a;	

printf("The an equals: %d\n", a);

//b

float y1, y2;

printf("Give a number: \n");
scanf("%d", &x);

y1=pow(x,5)-pow(x,3)+3*x;
y2=exp(x)+4*log(x)-pow(x,2); 

printf("The results are %f\t%f\n", y1, y2);

}
