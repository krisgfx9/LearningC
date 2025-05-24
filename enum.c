#include <stdio.h>

//enum Day{MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY}; // This is an enum that creates a new type called Day that has 7 values
//TODO Constant must be capital in C, MONDAY IS A CONSTANT

// You could also write enums with typedef like this
typedef enum{MONDAY = 1, TUESDAY = 2, WEDNESDAY = 3, THURSDAY = 4, FRIDAY =5, SATURDAY = 6, SUNDAY =7
}Day; // The name of the enum goes at the end


typedef enum {
  SUCCESS, FAILURE, PENDING
}StatusResponse;

void connectStatus(status);

int main (){

  //TODO: Enum (Enumerations) = A user defined data type that consists of a set of named integer constants
  //             Constant = a named storage location in memory whose value cannot be changed after it's initially assigned
  //             Benefit: replaces numbers with readable names such as instead of writing 0 or 1 you can write MONDAY or TUESDAY
  // Sunday = 0 ; Sunday is a constant, 0 is the number aossociated with it

  // printf("The value of MONDAY is %d\n", SUNDAY);

  StatusResponse status = FAILURE; // This is a variable of type StatusResponse that is set to SUCCESS

  connectStatus(status);
  // Day today = FRIDAY;
  //
  // if (today == SUNDAY || today == SUNDAY) {
  //   printf("Its the Weekend\n");
  // }else {
  //   printf("Its the Weekday\n");
  // }

  return 0;
}

void connectStatus(StatusResponse status) {
  switch (status) {
    case SUCCESS:
      printf("Connected\n");
    break;
    case FAILURE:
      printf("Disconnected\n");
    break;
    case PENDING:
      printf("Pending\n");
    break;
    default:
      printf("Unknown\n");
  }

}