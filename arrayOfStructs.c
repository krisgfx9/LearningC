#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
  char model[50];
  int year;
  int price;
}Car;

int main (){

  //TODO: Array of Structs = Array where each element contains a struct {}
  //                Helps organize and group together related data
  //                Useful for managing collections of complex data types

  Car cars [] = {{"Toyota Supra", 2000, 90000},
                {"Mustang", 2006, 50000},
                {"Chevrolet Camaro", 2010, 35000}};

  int size = sizeof(cars) / sizeof(cars[0]);

    for (int i =0; i <size; i++) {
      printf("%s is a model from %d and costs $%d\n", cars[i].model, cars[i].year, cars[i].price);
    }

  // Car car1 = {"Toyota Supra", 2000, 90000};
  // Car car2 = {"Mustang", 2006, 50000};
  // Car car3 = {"Chevrolet Camaro", 2010, 35000};

  // printf("%s is a model from %d and costs $%d\n", car1.model, car1.year, car1.price);
  // printf("%s is a model from %d and costs $%d\n", car2.model, car2.year, car2.price);
  // printf("%s is a model from %d and costs $%d\n", car3.model, car3.year, car3.price);

  return 0;
}