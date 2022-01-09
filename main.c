//Author: Luciana Castillo

#include <stdio.h>


//declaration of functions

int withdraw(int currentBalance, int withdrawAmount)
{
  return currentBalance-withdrawAmount;
}


int deposit (int depositAmount, int currentBalance)
{
  return depositAmount + currentBalance;
}

int checkBalance (int currentBalance)
{
  return currentBalance;
}

int main() 
{
//declaration of variables
  int input;
  int currentBalance = 10;
  int withdrawAmount;
  int depositAmount;

//loop infinitely(1 = true)
while(1){
  printf("**********************************\nWelcome to GME ATM! Please select one of the following options:\n1) Withdraw\n2) Deposit\n3) Check Balance\n4) Quit\n************************************\n");
  scanf("%d", &input);

//if user inputs 1, call withdraw and checkbalance functions
  if (input == 1) 
  {
    printf("Current balance: %d\n How much would you like to withdraw?\n", currentBalance);
    scanf("%d", &withdrawAmount);
    int wbalance = withdraw(currentBalance, withdrawAmount);
    currentBalance = checkBalance(wbalance);
    printf("Ok! New balance: %d\n\n", currentBalance);

//if user inputs 2, call deposit and checkbalance functions
  }
    else if (input == 2) {
    printf("Current balance: %d\nHow much would you like to deposit?\n", currentBalance);
    scanf("%d", &depositAmount);
    int dbalance = deposit(currentBalance,depositAmount);
    currentBalance = checkBalance(dbalance);
    printf("New balance: %d \n\n", currentBalance);

//if user inputs 3, print currentBalance
  }
    else if (input == 3) {
    printf("Current balance: %d \n\n", currentBalance);

//if user inputs 4, print currentBalance and quit program
  }
    else if (input == 4) {
    printf("Current balance: %d\n Thank you for using GME ATM. Quitting...\n\n", currentBalance);
    return 1;
  }
}

  return 0;
}
