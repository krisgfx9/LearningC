#include <stdio.h>
#include <stdlib.h> // we need to include this header file to use malloc and free functions

int main() {

  //Todo: Malloc() = A function in C that dynamically allocates a specified number of bytes in memory

  // the memory that we reserve is from the heap, for most situations when we use memory its from the stack, so we are gonna borrow/rent memeory from the heap

  int number = 0;
  printf("Enter the number of grades you want to enter: ");
  scanf("%d", &number); // we need to use the address of operator (&) to get the address of the variable number, so we can store the value in it

  char *grades = malloc(number * sizeof(char)); // we need to allocate memory for the grades, we use malloc to do that, we need to multiply the number of grades by the size of a char, so we can store all the grades in the memory that we allocated
    // Inacase this function fails for some reason, its gonna return a value of NULL, we need to check for this, because if we dereference a NULL pointer, its dangerous, it can cause a segmentation fault
    if (grades == NULL){
      printf("Memory allocation failed");
      return 1;
    }

    for (int i = 0; i < number; i++){
      printf("These are the number grades %d:  ", i + 1);
      scanf("%s", &grades[i]); // we need to use the address of operator (&) to get the address of the variable grades[i], so we can store the value in it
    }
    for (int i = 0; i < number; i++){
      printf("Grades are %c ", grades[i]); // we need to use the address of operator (&) to get the address of the variable grades[i], so we can print the value in it
    }

  free(grades); // we need to free the memory that we allocated with malloc, otherwise we will have a memory leak, so we need to free the memory when we are done with it
                  //TODO: Basically we return the appartment we rent and the key, the key is the pointer, and the apartment is the memory that we allocated with malloc
  grades == NULL; // avoids dangling pointers, we dont want a pointer in our program that points to a memory that we dont use anymore
  return 0;
}