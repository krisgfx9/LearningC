#include<stdio.h>
#include <stdbool.h> // this is for booleans
#include <string.h>

//Todo While Loops = Continue some code WHILE the condition remains true
//                   Condition must be true for us to enter the while loop

int main () {

  //   int number = 1;
  //   while (number <= 0) { // This will run until the condition is false, so if i have 1 in the number it won't even run because it will be false but the do while will run at least once
  //
  //     printf("Please enter a number bigger than 0 to exit the loop: ");
  //     scanf("%d", &number);
  //   }
  //
  // do{ // This one runs the print statement once and then does the while so it will run at least once
  //   printf("Please enter a number bigger than 0 to exit the loop: ");
  //   scanf("%d", &number);
  // }while (number <= 0);

  // char name[50] = "";
  //
  // printf("Please enter a name: ");
  // fgets(name, sizeof(name), stdin); // stdin means standard input
  // name[strlen(name) - 1] = '\0'; // This is used to remove the new line character from the string
  //
  // while (strlen(name) == 0) {
  //   printf("Please enter a name: ");
  //   fgets(name, sizeof(name), stdin); // stdin means standard input
  //   name[strlen(name) - 1] = '\0'; // This is used to remove the new line character from the string
  // }
  //
  // printf("Hello %s", name);

  char response = '\0';
  bool isRunning = true;

  while (isRunning) {
    printf("You are playing a game: \n");
    printf("Would you like to continue? press Y or N: ");
    scanf(" %c",&response);

    if (response != 'Y' && response != 'y') {
      isRunning = false;
    }

  }
  printf("You have exited the game\n");


  return 0;
}