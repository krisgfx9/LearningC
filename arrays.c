#include <stdio.h>
#include <string.h>

int main(){

  //TODO Array = A fixed -size collection of elements of the same type
  //             (Similar to a variable, but it holds more than 1 value)
  //             they are stored in contiguous memory locations.

  // int numbers [] = {10, 20, 30, 40, 50, 60, 70, 60, 70, 70, 99};
  // int size = sizeof(numbers) / sizeof(numbers[0]);

  //TODO This is very useful
  //uncomment this to see the size of the array
  // printf("%d\n", sizeof(numbers)); // this shows the total size of the array in bytes
  // printf("%d\n", sizeof(numbers[0])); // this shows the size of the first element of the array in bytes
  // so we can devide the total size of the array by the size of the first element to get the number of elements in the array to get the size of the array

  // for (int i = 0; i < size; i++) {
  //   printf("%d\n", numbers[i]);
  // }
  //TODO useful until here

  // printf("%d\n", numbers[2]); // This will print the first element of the array


  int scores [5] = {0}; // we set them as 0 because C leaves garbage values from previous programs, so this resets that

  int size = sizeof(scores) / sizeof(scores[0]);

  for (int i = 0; i < size; i++) {
    printf("Enter a number to the array: \n");
    scanf("%d", &scores[i]);
  }

  for (int i; i < size; i++) {
    printf("%d ", scores[i]);
  }

  return 0;
}
