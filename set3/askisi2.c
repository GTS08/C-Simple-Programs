#include <stdio.h>
#include <ctype.h>

main(int argc, char *argv[])
{
	FILE *fp;
	char ch;
	int count=0;
	char seek;
	
	seek=*argv[2];
	
	fp=fopen(argv[1], "r");
	
	if (fp==NULL)
	{
		printf ("Cannot open file");
		return -1;
	}
	
	ch=fgetc(fp);
	
	while (ch!=EOF)
	{
		if (ch==seek)
			count++;
		ch=fgetc(fp);
	}
	
	fclose(fp);
	
	printf ("the character appears %d times\n", count);
	
	return 0;
}
