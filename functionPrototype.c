#include <stdio.h>
#include <stdbool.h> // this is for booleans



// Todo Function Prototypes = Provide the compiler with information about the function:
// //name, return type, and parameters before its actual definition.
 // Enables type checking and allows functions to be used before they are defined.
 // Improves readability and organization of code, and helps prevent errors. YOU ALWAYS LIST IT BEFORE THE MAIN FUNCTION!!!


void hello(char name [50], int age);
bool isHeOfAge(int employee);

int main () {

    hello("Kris",25);
    if (isHeOfAge(15)) {
        printf("You may become an employee\n");
    }
    else {
        printf("You may not become an employee\n");
    }

  return 0;
}

void hello(char name [50], int age) {

  printf("Hello there %s\n", name);
  printf("You are %d years old\n", age);

}

bool isHeOfAge(int employee) {
    return employee >= 18;
}