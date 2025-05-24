//
// Created by kristijan on 5/7/2025.
//
#include <stdio.h>
#include <string.h>
#include <stdbool.h> // this is for booleans
#include <math.h>

// void birthday(char bName [], int bAge) { //This is a parameter and it expects a string and an int in this case
//   //Todo Function start 1
//   // Functions are A reusable section of code that can be invoked "called" from other parts of the program
//   // Arguments can be sent to a function so that it can use them
//
//   printf("Happy birthday to you\n");
//   printf("Happy birthday to you\n");
//   printf("Happy birthday dear %s\n", bName);
//   printf("You have turned %d years old today\n", bAge);
// }
    //Todo: Function end 1

// bool ageChecker (int age) {
//     if (age >= 18) {
//         return true;
//     }
//     else {
//         return false;
//     }
// }

// int getMax(int x, int y) {
//     if (x >= y) {
//         return x;
//     }
//     else {
//         return y;
//     }
// }


int main(void) {

    //Todo Function Prototypes = Provide the compiler with information about the function:
    // name, return type, and parameters before its actual definition.
    // Enables type checking and allows functions to be used before they are defined.
    // Improves readability and organization of code, and helps prevent errors. YOU ALWAYS LIST IT BEFORE THE MAIN FUNCTION!!!




    //Todo: Variable scope = Refers to where a variable is recognized and accessible in the program
    //  // Variables can share the same name if they are in different scopes {}
    // Functions cant see in the scope of the other functions

    // int max = getMax(33, 16);
    // printf("%d\n", max);

    // int ageK = 15;
    // if (ageChecker(ageK)) {
    //     printf("Your age is correct.\n");
    // }
    // else{
    //     printf("Your age is not correct.\n");
    // }

    //Todo Return = returns a value back to where you call a function


    //Todo Function start 2
  // char bName[50] = "";
  // int bAge = 0;
  //
  // printf("Enter your name: ");
  // fgets(bName, sizeof(bName), stdin);
  // bName[strlen(bName) - 1] = '\0'; //This is used to remove the new line character from the string
  //
  // printf("Enter your age: ");
  // scanf("%d", &bAge);
  //
  //
  // birthday(bName, bAge); //This is a Argument call, it will call the function birthday and pass the arguments
  // birthday(bName, bAge);
  //Todo: Function end 2



  //Todo: Logical operators start
  // Logical operatiors are used to combine or modify boolean expressions

  // && = And
  // || = Or
  // ! = Not

  //Not exapmple !
  // bool isSunny = true;
  //
  // if (!isSunny) {
  //   printf("It is Sunny");
  // }
  // else {
  //   printf("It is not Sunny");
  // }


  // this was a and && example
  // int temp = 20;
  //
  // if (temp <= 0 && temp >= 30) {
  //   printf("Temperature is good, and is exactly %d", temp);
  // }
  // else {
  //   printf("Temperature is bad and is exactly %d", temp);
  // }

  //Todo: Logical operators end

  //Todo: Calculator start

  // char operator = '\0';
  // double num1 = 0.0;
  // double num2 = 0.0;
  // double result = 0.0;
  //
  // printf("Please enter a number: ");
  // scanf("%lf", &num1);
  //
  // printf("Please enter a operator: ");
  // scanf(" %c", &operator);
  //
  // printf("Please enter a number: ");
  // scanf("%lf", &num2);
  //
  // switch (operator) {
  //   case '+':
  //     result = num1 + num2;
  //   break;
  //   case '-':
  //   result = num1 - num2;
  //   break;
  //   case '*':
  //     result = num1 * num2;
  //   break;
  //   case '/':
  //     if (num2 == 0) {
  //       printf("Cannot divide by zero\n");
  //       return 1;
  //     }else {
  //       result = num1 / num2;
  //     }
  //   break;
  //   default:
  //     printf("Invalid operator\n");
  // }
  // printf("%.2lf\n", result);

  //Todo: Calculator end


  //TODO: Nested If Stetements start

  // float price = 10.00;
  // bool isStudent = true;
  // bool isSenior = true;
  //
  // if (isStudent) {
  //   if (isSenior) {
  //     printf("You get a discount of 10%\n");
  //     printf("You get a discount of 20%\n");
  //     price = price * 0.7;
  //   }
  //   else {
  //     printf("You get a discount of 10%\n");
  //     price = price * 0.9;
  //   }
  // }
  // else {
  //   if (isSenior) {
  //     printf("You get a discount of 20%\n");
  //     price = price * 0.8;
  //   }
  // }
  // printf("%.2f$\n", price);

  //Todo: Nested If Stetements end

  //Todo: Switch statement start
  // its an alternative to using may if statements, more efficient w/ fixed integer values

  // char dayOfTheWeek = '\0';
  // printf("Enter a day of the week (M, T, W, R, F, S, U): ");
  // scanf("%s", &dayOfTheWeek);
  //
  // switch (dayOfTheWeek) {
  //   case 'M':
  //     printf("Today is Monday");
  //   break;
  //   case 'T':
  //     printf("Today is Tuesday");
  //   break;
  //   case 'W':
  //     printf("Today is Wednesday");
  //   break;
  //   case 'R':
  //     printf("Today is Thursday");
  //   break;
  //   case 'F':
  //     printf("Today is Friday");
  //   break;
  //   case 'S':
  //     printf("Today is Saturday");
  //   break;
  //   case 'U':
  //     printf("Today is Sunday");
  //   break;
  //   default:
  //     printf("Please enter a number between 1 and 7");
  // }

  //Todo: Switch statement end

  //TODO: If Statements start
  //If statement = Do something if a condition is true, If the condition is false, don't do it.

  //Todo: Temperature conversion program start
  // char type = "";
  // float celsius = 0.0f;
  // float fahrenheit = 0.0f;
  //
  // printf("Temperature conversion Program\n");
  // printf("Enter C for Celsius to Fahrenheit\n");
  // printf("Enter F for Fahrenheit to Celsius\n");
  // printf("Enter your choice: ");
  // scanf("%s", &type);
  //
  // if (type == 'C') {
  //   printf("Enter temperature in Celsius: ");
  //   scanf("%f", &celsius);
  //   fahrenheit = (celsius * 9 / 5) + 32;
  //   printf("The Temperature in Celsius is %.2f but it is %.2f in Fahrenheit", celsius, fahrenheit);
  // }
  // else if (type == 'F') {
  //   printf("Enter the temperature in Fahrenheit: ");
  //   scanf("%f", &fahrenheit);
  //   celsius = (fahrenheit - 32) * 5 / 9;
  //   printf("The Temperature in Fahrenheit is %.2f but it is %.2f in Celsius", fahrenheit, celsius);
  // }else {
  //   printf("Please enter C or F");
  // }

  //Todo: Temperature conversion program end

  //Todo: wight variation program start

  // int choice = 0;
  // float pounds = 0.0f;
  // float kilograms = 0.0f;
  //
  // printf("Weight conversion Calculator\n");
  // printf("1. Kilograms to Pounds\n");
  // printf("2. Pounds to kilograms\n");
  // printf("Enter your choice: ");
  // scanf("%d", &choice);
  //
  // if (choice == 1) {
  //   //Kilograms to pounds
  //   printf("Please enter the weight in Kilograms: ");
  //   scanf("%f", &kilograms);
  //   pounds = kilograms * 2.20462;
  //   printf("%.2f Kilograms is Equals to %.2f pounds\n", kilograms, pounds);
  // }
  // else if(choice == 2) {
  //   //Pounds to kilograms
  //   printf("Please enter the weight in Pounds: ");
  //   scanf("%f", &pounds);
  //   kilograms = pounds / 2.20462;
  //   printf("%.2f Pounds is Equals to %.2f Kilograms\n", pounds, kilograms);
  // }
  // else {
  //   printf("Please enter 1 or 2");
  // }

  //Todo: wight variation program end

  // char name [100] = "";
  //
  // printf("Enter your name: ");
  // fgets(name,sizeof(name), stdin);
  // name[strlen(name) -1] = '\0';
  //
  //
  // if (strlen(name) == 0 ){
  //   printf("Please enter your name");
  // }
  // else {
  //   printf("Hello %s", name);
  // }


  // int age = 0;
  // printf("Please enter your age: ");
  // scanf("%d", &age);
  //
  // if (age >= 65) {
  //   printf("You are a senior citizen");
  // }
  //
  // else if (age >= 18) {
  //   printf("You are an adult");
  //
  // }
  // else if (age < 0 ) {
  //   printf("You are not born yet");
  // }
  // else if (age == 0) {
  //   printf("You are a newborn");
  // }
  // else {
  //   printf("You are a child");
  // }


  //TODO: If Statements end

  //radius of a circle start

  // double radius = 0.0;
  // double area = 0.0;
  // const double PI = 3.14159;
  //
  // printf("Enter the radius of the circle: ");
  // scanf("%lf", &radius);
  //
  // area = PI * pow(radius, 2);
  // printf("This is the aread %.2lf",area);

  //radius of a circle end

  // Small cart program

  // char item [100] = "";
  // float price = 0.0f;
  // int quantity = 0;
  //
  // printf("Enter item name: ");
  // scanf("%s", &item);
  // printf("Enter item price: ");
  // scanf("%f", &price);
  // printf("Enter item quantity: ");
  // scanf("%d", &quantity);
  //
  //
  //
  //
  // printf("You have bought %d %s/s\n", quantity, item);
  // printf("The total price is %.2f", price * quantity);

  // Small cart program

  // int age = 0;
  // float gpa = 0.0;
  // char grade = '\0';
  // char name[100] = "";
  //
  // printf("Please enter your age: ");
  // scanf("%d", &age);
  //
  // printf("Please enter your gpa: ");
  // scanf("%f", &gpa);
  //
  // printf("Please enter your grade: ");
  // scanf(" %c", &grade);
  //
  // getchar();
  // printf("Please enter your name: ");
  // fgets(name, sizeof(name), stdin);
  // name[strlen(name) - 1] = '\0';
  //
  //
  // printf("%s\n", name);
  // printf("%d\n", age);
  // printf("%f\n", gpa);
  // printf("%c\n", grade);


  // int gloves = 1700;
  // double nocts = 0.16239440441132;

  // int age = 24;
  // int zip = 9000;
  //
  // float height = 1.85;
  // float weight = 70.5;
  //
  // char grade = 'A';
  // char symbot = '!';
  // char currency = '$';
  //
  // char name [] = "Kristijan";
  // char food [] = "Pizza and Trilece";
  // char color [] = "Turquoise";
  //
  // bool isStudent = 1;
  // bool isOnline = 1;
  //
  // printf("The gloves are sold for %d $\n", gloves);
  // printf("The nocts are float %.14lf\n", nocts);
  // printf("My age is %d\n", age);
  // printf("My height is %.2f\n", height);
  // printf("My weight is %.1f\n", weight);
  // printf("My zip code is %d\n", zip);
  // printf("I would like to get the following grade %c\n", grade);
  // printf("This is my favorite character %c\n",symbot);
  // printf("My fav currency is %c\n", currency);
  // printf("My name is %s\n", name);
  // printf("My Favourite food is %s\n", food);
  // printf("My Favorite color is %s\n", color);
  //
  // if (isStudent && isOnline) {
  //   printf("%s is a Student and is online", name);
  // }else {
  //   printf("%s is not a Student and is not online", name);
  // }

  return 0;

}
