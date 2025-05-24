#include <stdio.h>
#include <string.h>
#include <stdbool.h>


typedef struct{
  char name[50];
  int age;
  float gpa;
  bool isFullTime;
}Student;

void printStudents(Student student);

int main(){

  //TODO: Struct = A custom container that holds multiple pieces of related information.
  //               Similar to Objects in other programming languages

  Student student1 = {"Kris", 24, 4.0, true}; // This is a struct that holds the information of a student
  Student student2 = {"Michael", 20, 5.25, true};
  Student student3 = {0};

  strcpy(student3.name, "Accsharan"); // This copies the string "Accsharan" into the name field of student3 it basically sets the name of the student3 to Accsharan
  student3.age = 25;
  student3.gpa = 5.0;
  student3.isFullTime = true;

  // printf("The name of the student is %s\n", student2.name);
  // printf("The age of the student is %d\n", student2.age);
  // printf("The gpa of the student is %.1f\n", student2.gpa);
  // printf("%s %s",student2.name, (student2.isFullTime) ? "is a Fulltime student" : "is not a full time student");

  printStudents(student1);
  printStudents(student2);
  printStudents(student3);

  return 0;
}

void printStudents(Student student) { //We can pass the struct as a parameter to a function and write student for all the struct variables / all the student variables
  printf("The name of the student is %s\n", student.name);
  printf("The age of the student is %d\n", student.age);
  printf("The gpa of the student is %.1f\n", student.gpa);
  printf("%s %s\n",student.name, (student.isFullTime) ? "is a Fulltime student" : "is not a full time student");
  printf("\n");

}