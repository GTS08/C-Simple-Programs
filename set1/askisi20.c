#include <stdio.h>

int main()
{
	int pin, option, optionnew, withdraw;
	float balance=100, deposit;
		
	printf ("Please, enter your PIN.\n");
	
	do
	{
		scanf ("%d", &pin);
		if (pin!=2014)
			printf ("PIN was wrong, please enter it again.\n");
	}
	while (pin!=2014);
	
	printf ("Please, select your option.\n");
	printf ("1.Available Balance.   Enter 1.\n");
	printf ("2.Cash Deposit.        Enter 2.\n");
	printf ("3.Cash Withdrawal.     Enter 3.\n");
	printf ("4.Exit.                Enter 4.\n");
	
	do
        {
                scanf ("%d", &option);
                if (option!=1 && option!=2 && option!=3 && option!=4)
                        printf ("Please select your option again.\n");
        }
        while (option!=1 && option!=2 && option!=3 && option!=4);
	
	if (option==1)
		printf ("Your balcance is %f Euros", balance);
	else if (option==2)
	{
		printf ("Please, enter the amount you want to deposit");
		scanf ("%f", &deposit);
		balance=balance+deposit;
		printf ("The new balance is %f.\n", balance);
	}
	else if (option==3)
	{
		printf ("Please enter the amount you want to withdraw. The amount must be multiple of 20.\n");
		
		do
        	{
			scanf ("%d", &withdraw);
                	if ((withdraw%20)!=0)
				printf ("The amount must be multiple of 20. Please enter it again.\n");
        	}
        	while ((withdraw%20)!=0);
		
		if (withdraw>100)
			printf ("You do not have that much money to withdraw\n");
		else
		{
		balance=balance-withdraw;
		printf ("You have withdrawed %d Euros. Your new balance is %f.\n", withdraw, balance);
		}
	}
	else 
		printf ("You have exited the program. Have a nice day.\n");
}
