#include <stdio.h>
int main()
{
  // ATM Transaction Simulator
  int correctPin = 1234;
  int enteredPin = 0;
  int choice;
  int withdrawAmount, depositAmount;
  int accountBalance = 20000;

  // Pin input
  printf("Enter you Pin :");
  scanf("%d", &enteredPin);

  // pin verification
  if (correctPin == enteredPin)
  {
    // Transaction choice
    printf("\nEnter your choice:\n");
    printf("1. Check Account balance \n ");
    printf("2. withdraw money \n");
    printf("3. deposit money \n");
    scanf("%d", &choice);

    if (choice == 1)
    {
      // check accountBalance
      printf("Your Account Balance is : %d", accountBalance);
    }
    else if (choice == 2)
    {
      printf("Enter your  Withdrawal Amount :");
      scanf("%d", &withdrawAmount);

      // check accountBalance is sufficient or not 
      if (withdrawAmount <= accountBalance)
      {
        //subtract account balance  with withdrawAmount
        accountBalance = accountBalance - withdrawAmount;
        printf("You have withdrawn %d.\n", withdrawAmount);

        printf("Remaining balance : %d\n", accountBalance);
      }
      else
      {
        // printf insufficient balance
        printf("Insufficient balance ! Please try again.\n");
      }
    }
    else if (choice == 3)
    {
      printf("Enter Deposit Amount  :");
      scanf("%d", &depositAmount);
      // add depositAmount to accountBalance
      accountBalance = accountBalance + depositAmount;
      printf("You have deposited %d .\n", depositAmount);
      printf("Updated Balance : %d\n", accountBalance);
    }
    else
    {
      // printf("invalid transaction choice")
      printf("invalid transaction choice. please try again. \n");
    }
  }
  else
  {
    // printf("incorrect pin. Access denied");
    printf("Incorrect pin. Access denied !");
  }
  return 0;
}