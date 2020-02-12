#include <stdio.h>
int main()
{
int a;
int b;
scanf("%d%d", &a, &b);
int m=a*b;
int sum=a+b;
int dia=a-b;
if (m>0 && m<10)
	printf("%d\n", sum);
else if (m>100 && m<1000)
	printf("%d\n", dia);
else
	printf("Numbers do not fullfil the requirements\n");
}
