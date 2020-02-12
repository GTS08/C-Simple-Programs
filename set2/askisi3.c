#include <stdio.h>
#include <string.h>

int check(char word1[100], char letter1);

int main()
{
	char word[100];
	char wordcpy[100];
	char letter[100];
	char lettercpy[100];
	char temp[100];
	char new[100];
	char charletter;
	int i, k, j=0, tries=5;
	
	printf ("Enter a word\n");

	fgets (word, 100, stdin);

	system ("clear");
		
	for (i=0; word[i]!='\0'; i++)
	{
		if (word[i]>='A' && word[i]<='Z')
			word[i]=word[i]+32;
	}
	
	strcpy (wordcpy, word);
		
	for (i=0; wordcpy[i]!='\0'; i++)
        {
                if (wordcpy[i]>='a' && wordcpy[i]<='z')
                        wordcpy[i]=95;
        }	

	printf ("The word is: %s\n", wordcpy);

	printf ("Number of tries : %d.\n", tries);
	
	while (tries!=0 && strcmp(word, wordcpy)!=0)
	{
		printf ("Enter a letter.\n");
	
		scanf ("%c", &charletter);
		getchar();
		
		if (check(new, charletter)==1)
			printf ("You already entered this letter. Please enter a different letter.\n");
		else
		{
			k=check(word, charletter);
		
			if (k==1)
			{	
				for (i=0; wordcpy[i]!='\0'; i++)
				{		
                			if (word[i]==charletter)
   	                	     		wordcpy[i]=charletter;
				}
		
				printf ("%s\n", wordcpy);
			}	
			else if (k==0)
			{
				tries--;
				printf ("Number of tries left: %d.\n", tries);
			}
		}
		
		new[j++]=charletter;
	}	
	
	if (strcmp(wordcpy, word)==0)
		printf ("Congratulations! You found the word.\n");
	else if (tries==0)
		printf ("You lost, better luck next time.\n");
}
		
int check(char word1[100], char letter1)
{
	int a, res, sum=0, w;
	
	for (a=0; word1[a]!='\0'; a++)	
	{
		if (word1[a]==letter1)
			res=1;
		else if (word1[a]!=letter1)
			res=0;
		sum=sum+res;
	}
	
	if (sum>=1)
	{
		w=1;
		return w=1;
	}
	else
	{
	 	w=0;
		return w=0;
	}
}
