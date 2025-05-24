#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getUserChoice();
int getComputerChoice();
int determineWinner(int userChoice, int computerChoice);

int main(){

  srand(time(NULL)); // This is used to seed the random number generator with the current time

  printf("*** Rock, Paper, Scissors ***\n");


  int userChoice = getUserChoice();
  int computerchoice = getComputerChoice();


  // printf("You chose %d\n", userChoice);
  // printf("The computer chose %d\n", computerchoice);


  switch(userChoice) {
    case 1:
      printf("You chose Rock\n");
    break;
    case 2:
      printf("You chose Paper\n");
    break;
    case 3:
      printf("You chose Scissors\n");
    break;
  }

  switch(computerchoice) {
    case 1:
      printf("Computer chose Rock\n");
    break;
    case 2:
      printf("Computer chose Paper\n");
    break;
    case 3:
      printf("Computer chose Scissors\n");
    break;
  }

  int result = determineWinner(userChoice, computerchoice);


  return 0;
}


int getUserChoice(){

  int choice = 0;

  do{
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Please enter your choice: ");
    scanf("%d", &choice);

  }while(choice < 1 || choice > 3);

  return choice;

}


int getComputerChoice(){
    return (rand() % 3) + 1;

}
int determineWinner(int userChoice, int computerChoice) {

  if (userChoice == computerChoice) {
    printf("It's a tie!\n");
  }
  else if ((userChoice == 1 || computerChoice == 3) ||
    (userChoice == 2 && computerChoice == 1) ||
    (userChoice == 3 && computerChoice == 2)){
    printf("You win!\n");
    }
  else {
    printf("Computer wins!\n");
  }
}