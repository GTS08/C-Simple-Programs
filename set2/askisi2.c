#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str[100];		
	const char s[100] = " ,.-!";
        char *token;
	int len, j, i;	
	int arlen[100];
	int lenarlen[100];
		
	printf ("Enter a sentence.\n");
	fgets(str, sizeof(str), stdin);
	
	
	token = strtok(str, s);	
	
	j=0;
		
   	while( token != NULL ) 
	{
//	        printf ("%d\n", len);
		len = strlen(token);

		arlen[j]=len;			
		printf ("%d\n", arlen[j]);
		j++;
			
		printf ("%s\t", token);
		token = strtok(NULL, s);		
	}

//	printf ("%d\n", len-1);			   
	len--;
	j--;
	arlen[j]=len;	
	printf ("%d\n", arlen[j]);
	
	for (i=0; i<=j; i++)
		printf ("%d", arlen[i]);
}
