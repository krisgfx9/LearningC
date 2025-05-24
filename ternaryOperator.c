#include <stdio.h>
#include <stdbool.h>


int main(){

  //TODO Ternary Operator ? = shortcut for if-Else statements
  // (condition) ? value_if_true : value_if_false;  the : means return true 'Otherwise' false
  // ? is IF and : is ELSE

  // int x = 30;
  // int y = 20;
  // int max = (x < y) ? x : y; // this will return the max value between x and y

  // bool isOnline = true;
  //
  // printf("%s\n", (isOnline) ? "Online" : "Offline"); // this will return Online if isOnline is true and Offline if it is false

//   int number = 3;
// printf("%d is %s", number, (number % 2 == 0) ? "even" : "odd"); // this will return even if the number is even and odd if it is odd
  // int age = 15;
  // printf("You are %d %s", age, (age > 18) ? "You are an adult" : "Get lost kid");

  int hours = 11;
  int minutes = 5;
  char *meridiam = (hours < 12) ? "AM" : "PM"; // This pointer will display characters until it reached the null terminator '\0'


  printf("%02d:%02d %s", hours, minutes,meridiam);
  return 0;
}
