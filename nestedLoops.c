#include <stdio.h>
#include <stdbool.h> // this is for booleans
#include <string.h>

// TODO Nested loops is basically a loop inside of another loop

int main() {

  int columns = 0;
  int rows = 0;
  char symbol = '\0';

  printf("Please enter the number of rows: ");
  scanf("%d", &rows);

  printf("Enter a number of columns: ");
  scanf("%d", &columns);

  printf("Enter a Symbol: ");
  scanf(" %c", &symbol);


  for (int i = 0; i < rows; i++) { // these two loops print a symbol in a rectangle form with as many rows and columns as you want
    for (int i = 0; i < columns; i++) {
      printf("%c", symbol);
    }
    printf("\n");
  }


  // for (int i = 1; i <=10; i++) { // this is a multiplication table
  //   for (int j = 1; j <=10; j++) {
  //     printf("%3d ", j * i); // the 3 basically shifts the number to the right by 3 spaces so it looks better
  //   }
  //   printf("\n");
  // }


  // for (int j = 1; j <4; j ++) {
  //   for (int i = 0; i <=10; i++) {
  //     printf("%d ", i);
  //   }
  //   printf("\n");
  // }
  return 0;
}