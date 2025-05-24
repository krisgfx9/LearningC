#include <stdio.h>

int main (){
  //FiLE is a struct that is used to represent a file in C
  FILE *pFile = fopen("input.txt", "r"); // r is for read mode, w is for write mode and a is for append mode


    // TODO Buffer is like a waiting room, and it temporarily holds data for us to read
  char buffer [1024] = {0}; //Example: If we are reading a book and we read a character and we go to the next room to write it down that is not good,
                            //but with buffer kind of like an internal memory, we can read a whole paragraph and then go across the room to write it down
    //1024 is a good number generally for reading



  if(pFile == NULL){
      printf("Something went wrong");
      return 1;
 }

  // we need to include the buffer so we can store the text somewhere
  // and its size (buffer size)
  while (fgets(buffer, sizeof(buffer), pFile) != NULL) {
    printf("%s", buffer);
  }

  fclose(pFile);

  return 0;
}