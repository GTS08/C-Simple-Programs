#include <stdio.h>
int main()
{
int i;
float avg;
float sum;
float grades;
sum=0;

printf ("Give the grades of the 10 subjects (0-10).\n");

for(i=1; i<=10; i++)
{
	do
	{	
		scanf("%f", &grades);
		if (grades>10)
			printf("You should give a number between 0-10. Please enter it again.\n");
	}
	while (grades>10);
	
	sum=sum+grades;
}
avg=sum/10;

if (avg<5)
	printf("Failure.\n");
else
	printf("Success.\n");
}
