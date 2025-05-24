#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(){

  int choice = 0; // 1. Check Balance 2. Deposit 3. Withdraw 4. Exit
  float balance = 0.0f;
  printf("Welcome to the Banking Program\n");

  do{
    printf("Select an option:\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);


    switch (choice) {
      case 1:
        checkBalance(balance); // this checks the balance
      break;
      case 2:
        balance = balance + deposit(); // this updates the balance with the deposit amount so plus
      break;
      case 3:
        balance = balance - withdraw(balance); // this updates the balance with the withdraw amount so minus
      break;
      case 4:
        printf("Thank you for using the Banking Program\n");
      break;
      default:
        printf("\nInvalid choice, please select 1 to 4\n");
    }
  }while(choice != 4);


  return 0;
}

void checkBalance(float balance){
  printf("Your current balance is: $%.2f\n", balance);

}
float deposit(){

  float amount = 0.0f;
  printf("Enter the amount to deposit: ");
  scanf("%f", &amount);

  if (amount < 0) {
    printf("You have deposited an invalid amount\n");
    return 0.0f;
  }
  else {
    printf("You have deposited %.2f\n", amount);
    return amount;
  }

}
float withdraw(float balance){

  float amount = 0.0f;
  printf("Enter the amount to withdraw: ");
  scanf("%f", &amount);
  if (amount < 0) {
    printf("You have withdrawn %.2f\n", amount);
    return 0.0f;
  }
  else if (amount > balance) {
    printf("You got not that much money monkey\n");
    return 0.0f;
  }
  else {
    printf("You have withdrawn %.2f\n", amount);
    return amount;
  }

  return 0.0f;
}