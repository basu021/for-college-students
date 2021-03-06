/* 
cd "Data structure using C"
================> Pointer and it's application <================

1=> What is Pointer?

Ans. Pointer is a variable which stores the address of another variable. It is used to access the value of another variable. 
A pointer can also be used to refer to another pointer function. A pointer can be incremented/decremented, 
i.e., to point to the next/ previous memory location. The purpose of pointer is to save memory space and achieve faster execution time.

=> How to declare a pointer?

Ans. Pointer is declared using the following syntax:
     data_type *variable_name;

=> What is pointer initialization?

 ->  Pointer initialization is the process of assigning address of a variable to a pointer variable. IT contains the address of a variable of the same
     data type.
     Example:
     *variable_name = &variable_name;

     In C language the address operator & in used to determine the address of a variable. The & returns the address the variable associated with it.

     Example:

     int a = 10;
     int *p; //pointer declaration
     p = &a; //pointer initialization
     
     Remember: Pointer variable is always points to variables of the same data type.

     Example: 

         float a;
         int *p = &a; //It will give either warning or error because a is of type float and p is of type int. 

*/

#include <stdio.h>

int main()
{
    int a;
    int * p; //pointer declaration
    p = &a; //pointer initialization
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Pointer value of %d is: %p\n",a, p); //printing the value of a

    printf("\n\nSome other way to print the value of %d\n\n",a);

    printf("Value of a is %d",a);
    printf("\nValue of a is %d",*p); //printing the value of a using pointer
    printf("\nValue of a is %d",*&a); //printing the value of a using pointer
    printf("\nValue of a is %d",*&*p); //printing the value of a using pointer
    printf("\nValue of a is %d",*&*&a); //printing the value of a using pointer
    printf("\nValue of a is %d",*&*&*p); //printing the value of a using pointer
    printf("\nValue of a is %d",*&*&*&a); //printing the value of a using pointer


    printf("\n\nSome other way to print the address of %d\n\n",a);

    printf("Address of a is %p",&a);
    printf("\nAddress of a is %p",&*p); //printing the address of a using pointer
    printf("\nAddress of a is %p",&*&a); //printing the address of a using pointer
    printf("\nAddress of a is %p",&*&*p); //printing the address of a using pointer
    printf("\nAddress of a is %p",&*&*&a); //printing the address of a using pointer
    printf("\nAddress of a is %p",&*&*&*p); //printing the address of a using pointer
    printf("\nAddress of a is %x",&a); //printing the address of a using pointer

    return 0;
}