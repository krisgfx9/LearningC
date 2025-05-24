#include <stdio.h>
#include <stdlib.h>

void birthday (int* age);

int main() {

    // Todo : Pointer = A variable that stores the memory address of another variable.
    //                Allows direct access to memory locations, enabling efficient data manipulation and dynamic memory management.
    //                Pointers are declared using the * symbol, and they can point to any data type. ( %p if you want to print the address of a pointer )
    //         Benefit: They help avoid wasting memory by allowing you to pass the address of a large data structure instead of copying the entire data.
    // Example: if i have 20 pizzas and i want to share them with my friends, i dont go knocking on each of their doors and hand them a pizza,
    // instead i knock and i tell them where my address is so they can come and take some pizza

    int age = 24;
    int *pAge = &age; // & = gives you the address
    // you also don't need to asign an extra variable like *pAge to give the address to a fucntion you can just do what the line as bellow
    //birthday(&age); // this basically uses the & operator to get the address of the age variable and pass it to the birthday function

    birthday(pAge);
    //birthday(&age); // this basically uses the & operator to get the address of the age variable and pass it to the birthday function
    printf("Your age is %d\n", age); // this will print the original age variable, which is 24

    printf("%p\n", &age);
    printf("%p\n", pAge);// this prints the address of the pointer pAge, which is the same as the address of age


    return 0;
}

void birthday (int* age) {
    // we pass age here, but that means we copy age from above so it will not change the original age variable
    //we can do  age++; but it won't work, read to know why // what we change here is not changing the original value, but we change the copied value.
    //So if we actually want to change the original value of age, we need to pass the address of age to the function, which means the pointer address

    // but if we want to change it we need to use the dereferencing operator * to access the value at the address stored in the pointer
    (*age)++; // this will increment the value at the address stored in the pointer by 1
    // we have it in parentheses because we want to increment the value at the address stored in the pointer, not the pointer itself
    // if we had it without parentheses, it would increment the pointer itself, which is not what we want
    // so it will increment the pointer address by 1 and not the value
    // if we have it in parentheses we first reference the value first and then we increment, otherwise we first increment and them reference the value, which increases the address by 1 and not the value
}
            // imagine the * as a key that unlocks a memory address and return the value to us
           //     .--.
           //    /.-. '----------.
           //    \'-' .--"--""-"-'
           //     '--'

