#include <stdio.h>
#include <stdlib.h>
unsigned long amount=250000,withdraw,deposit;//dilosi metavliton
int pin,i,choice;//dilosi akeraion
char transaction='y';//dilosi apantisis
int main (){
	 printf ("---------------------------------\n");
	while (pin!=2230)//loop gia tin eisagogi toy PIN
	{
	   printf(" \tPLEASE ENTER YOUR PIN :\n  ");
       scanf("%d", &pin);
       if (pin != 2230)
         printf("PLEASE ENTER VALID PASSWORD\n");
	}
	do
 {
    printf ("------------------------------------\n");//to main menu
	printf("\tWELCOME TO OUR ATM Service!!! \n");
	 printf ("-------------------------------------\n");
    printf("\t(1) CHECK BALANCE.\n");
    printf("\t(2) WITHDRAWAL CASH.\n");
    printf("\t(3) DEPOSIT CASH.\n");
    printf("\t(4) QUIT.\n");
    printf("\n");
    printf ("---------------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)//epiloges gia to menu
    {
   case 1:
    printf("\n YOUR BALANCE IS : %lu.\n ", amount);//to check balance
    break;
   case 2:
    printf("\n ENTER THE AMOUNT: ");//Analipsi
    scanf("%lu", &withdraw);
   if (withdraw % 100 != 0)
   {
    printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100.\n");
   }
   else if (withdraw >(amount - 1000))//mi eparkes poso
   {
    printf("\n INSUFFICENT BALANCE.");
   }
   else
   {
    amount = amount - withdraw;
    printf("\n\n PLEASE COLLECT YOUR CASH.\n");//epitixes analipsi
    printf("\n YOUR CURRENT BALANCE IS :%lu.\n", amount);
   }
    break;
   case 3://katathesi
    printf("\n ENTER THE AMOUNT: \n");
    scanf("%lu", &deposit);
    amount = amount + deposit;
    printf(" \nYOUR BALANCE IS:%lu", amount);
    break;
   case 4:
    printf("\n THANK YOU USING OUR ATM SERVICES!!!");
    break;
    default:
    printf("\n INVALID CHOICE");//ean dwsei lathos epilogi ektos toy 1-4
   }
    printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): ");
    getchar();
    scanf("%c", &transaction);
   if (transaction == 'n'|| transaction == 'N')
    i = 1;
 } while (!i);
    printf("\n\n THANKS FOR USING OUR ATM SERVICE.GOODBYE!");
    
}

