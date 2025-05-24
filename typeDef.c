#include <stdio.h>

typedef char initials [3]; // this is a typedef that creates a new type called initials that is an array of 3 characters
// This is 3 characters because 2 characters and the "\0" null terminator
typedef char String [50];

int main(){

  //Todo: typedef = reserved keyword that gives an existing datatype a "NICKNAME"
  //                Helps simplify complex types and improves code readability
  // EX:            typedef existing_type new_name; like (typedef int krisInt or michaelChar;)

  initials name1 = {"KB"};
  initials name2 = {"TB"};
  initials name3 = {"BB"};

  printf("My Initials are %s\nMy Initials are %s\nMy Initials are %s\n", name1, name2, name3);

  return 0;
}