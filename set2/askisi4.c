#inclue <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 100
#define M 100

struct word_pair
{
	char word[M];
	int length;
};

void initialize (struct word_pair word_table[], int size);

main()
{
	initialize (struct word_pair word_table[], int size);
	printf ("%s", word_table);
}

void initialize (struct word_pair word_table[], int size)
{
	printf ("Enter some words");
	fgets (word_table, N, stdio);
	
	printf ("%s", word_table);
}
