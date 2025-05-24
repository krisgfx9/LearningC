#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main() {



  char questions [][100] = {"What is the largest planet in the solar system?",
                            "What is the Hotest Planet?",
                            "What planet has the most moons?",
                            "Is the Earth flat?"};

  char options [][100] = {"A. Jupiter\nB. Mars\nC. Earth\nD. Saturn",
                            "A. Mercury\nB. Venus\nC. Earth\nD. Mars",
                            "A. Earth\nB. Mars\nC. Saturn\nD. Jupiter",
                            "A. Yes\nB. No\nC. Maybe\nD. I don't know"};

  char answerKey [] = {'A','B','C','A'};

    int questionSize = sizeof(questions)/sizeof(questions[0]);


    char guess = '\0';
    int score = 0;

  printf("*** Quiz Game ***\n");

    for (int i = 0; i < questionSize; i++) {
      printf("\n%s\n", questions[i]);
      printf("\n%s\n", options[i]);
      printf("\nEnter your choice: ");
      scanf(" %c", &guess);
      // printf("Answer is: %c\n", answerKey[i]);

      if (toupper(guess) == answerKey[i]) {
        printf("The answer is correct\n");
        score++;
      }else {
        printf("The answer is wrong\n");

      }
    }
  printf("You guessed %d out of %d questions", score, questionSize);



  return 0;
}