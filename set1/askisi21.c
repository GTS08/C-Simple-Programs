#include <stdio.h>

int main()
{
	int code, time, sms;
	float timep, smsp, fpa, total;

	printf ("Give your customer code.\n");
	do
	{
		scanf ("%d", &code);
		if (code<999 || code>10000)
			printf ("The code you entered was wrong. The code must be 4-digit number.Please enter it again.\n");
	}
	while (code<999 || code>10000);
	
	printf ("Give your talk time in seconds.\n");
	scanf ("%d", &time);
	
	printf ("Give the number of SMS you sent.\n");
	scanf ("%d", &sms);
	
	timep=0.02*time;
	smsp=0.14*sms;
	fpa=0.23*(timep+smsp);
	total=timep+smsp+fpa;
	
	if (total<=12)
	{
		total=12;	
	
		printf ("Tmob account\n");
		printf ("----------------------------------------------------------------\n");
		printf ("Customer code\t      time\t SMS\t FPA\t |\t TOTAl\n");
		printf ("%d       \t      %d  \t %d\t %.2f\t |\t %.2f\n", code, time, sms, fpa, total);
		printf ("________________________________________________________________\n");
	}
	else
	{
		printf ("Tmob account\n");
                printf ("----------------------------------------------------------------\n");
                printf ("Customer code\t      time\t SMS\t FPA\t |\t TOTAl\n");
                printf ("%d       \t      %d\t %d\t %.2f\t |\t %.2f\n", code, time, sms, fpa, total);
                printf ("________________________________________________________________\n");
	}
}
