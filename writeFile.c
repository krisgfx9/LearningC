#include <stdio.h>

int main (){

  //Todo: Write File

  // This will create a file called output.txt in the current directory
  // FILE *pFile = fopen("output.txt", "w"); // W is for write mode and R is for read mode and a is for append mode
  FILE *pFile = fopen("C:\\Users\\kristijan\\Documents\\Coding\\Learning C\\textOutputs\\output.txt", "w"); // We need to use double backslashes otherwise C will think its an escape character/ escape sequence


  char text [] = "This is the first file that i am writing\n My name is Kris \n and i do enjoy programming in C\n";

  if (pFile == NULL) {
    printf("There was an error creating the file");
    return 1;  //to Exist a program prematurely we need to return a value tha is not zero (NOT THIS return 0), instead we return 1 (return 1), return 1 serves as an exit code
                // So in short we return 1 where there is an error in the program and we return 0 where there is no error in the program
  }


  // We use fprintf to write to the file, it is similar to printf but it writes to a file instead of the console
  fprintf(pFile, "%s", text); // we need the pointer to the file (pFile), a format specifier (%s) and then our variable for text.

  printf("File was written successfully\n");


  fclose(pFile); // do note that everytime we run this program with the same name if we don't delete the output.txt file it will overwrite the file, so if you want to append to the file you can use "a" instead of "w" in the fopen function

  return 0;
}