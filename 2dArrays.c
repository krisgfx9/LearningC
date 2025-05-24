#include <stdio.h>
#include <string.h>

int main (){

  // TODO 2D Arrays = an array where each element is an array, so like an array in an array
     // array [][] = {{}, {}, {}, {}}

  char telephone [][3] = {{'1', '2', '3'}, {'4', '5' , '6'}, {'7', '8' , '9'}, {'*', '0' , '#'}}; // this is a 2D array

  // int numbers [] [3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  for (int i = 0; i <4; i++){ // this is in charge of the rows
    for(int j = 0; j <3; j++){ // columns
      printf("%c ", telephone[i][j]);
  }
    printf("\n");
}


  // char names [5][25] = {0};
  //
  // int size = sizeof(names) / sizeof(names[0]);
  //
  //
  // for (int i = 0; i < size; i++) {
  //   printf("Please enter your name:\n");
  //   fgets(names[i], sizeof(names[0]), stdin);
  //   names[i] [strlen (names[i]) -1] = '\0';
  //
  // }
  // for (int i = 0; i < size; i++) {
  //   printf("%s\n", names[i]); // prints the names
  // }


  return 0;
}