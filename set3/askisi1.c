#include <stdio.h>
#include <stdlib.h>

#define SIZE 30

struct account{
	char name[SIZE];
	int money;
	int day;
        int month;
        int year;	
};

void read_credentials (struct account *p);

void print_credentials (struct account x);

main()
{
	struct account *pinakas;
	int i, N;
	
	printf ("Give the number of accounts you want to register: ");
	scanf ("%d", &N);
	
	pinakas=malloc(sizeof(struct account)*N);
		
	for (i=0; i<N; i++)
		read_credentials (&pinakas[i]);

	for (i=0; i<N; i++)
		print_credentials (pinakas[i]);		
}

void read_credentials (struct account *p)
{
	printf ("Give the account name: ");
	scanf ("%s", p->name);
	
	printf ("Give ammount of deposit: ");
	scanf ("%d", &p->money);
	
	printf ("Give the day of deposit: ");
	scanf ("%d", &p->day);
	
	printf ("Give the month of deposit: ");
	scanf ("%d", &p->month);
	
	printf ("Give the year of deposit: ");
	scanf ("%d", &p->year);
}


void print_credentials (struct account x)
{
//	printf ("\n Give the name of the person who deposit the money: );
//	scanf ("%s", p->name);
	
	printf ("\n %s: %d, %d/%d/%d", x.name, x.money, x.day, x.month, x.year);
}
