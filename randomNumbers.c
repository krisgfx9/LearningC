#include <stdio.h>
#include <stdlib.h> // This is for the random numbers
#include <time.h> // This is for the time function


// TODO : Psuedo - Random = Appears random but they are determined by a mathematical formular that
//                 uses a seed value to generate a predictable sequence of numbers.
//                 For advanced: we can use MERSENNE TWISTER or dev/random

int main(){

  srand(time(NULL)); // This is used to seed the random number generator with the current time

  // int min = 50;
  // int max = 100;
  //
  // int randomNumber = (rand() % (max - min + 1)) + min; // This is used to generate a random number between 50 and 100
  // int radomNumber2 = (rand() % (max - min + 1)) + min; // This is used to generate a random number between 50 and 100
  // int radomNumber3 = (rand() % (max - min + 1)) + min; // This is used to generate a random number between 50 and 100

  // printf("%d %d %d", randomNumber, radomNumber2, radomNumber3); // This is used to print the random number


  int guess = 0;
  int tries = 0;
  int min = 1;
  int max = 100;
  int answer = (rand() % (max - min + 1)) + min;

  printf("*** Number Guessing Game ***\n");


  do {
    printf("Guess a number between 1 and 100 %d %d: ", min, max);
    scanf("%d", &guess);
    tries++;

    if (guess < answer) {
      printf("The answer is too low \n");
    }
    else if (guess > answer) {
      printf("The answer is too high\n");
    }
    else {
      printf("The answer is correct\n");
    }

  }while(guess != answer);

  printf("The answer is %d\n", answer);
  printf("it took you %d tries\n", tries);



  //
  // while (guess != answer) {
  //   if (randomNumber != 80) {
  //     printf("The number is wrong");
  //   }
  //   else {
  //     printf("The number is correct");
  //   }
  //
  // }
  return 0;
}