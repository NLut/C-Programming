#include <stdio.h>
#include <string.h>

int main(){
    char* text = "Hello";
    int a = 10;
    int *a_ptr = &a; // pointer a_ptr store address of a by reference &a and dereference in by *
    // * indicate that it's pointer

    printf("Address of string is: %p\n", &text);
    printf("Value of first char of string is: %c\n", *text);
    printf("Value of second char of string is: %c\n", *(text+1));
    printf("This is different definition: %c\n", *text+1);
    printf("Size of string is: %lu\n", strlen(text));
    printf("The address of a is: %p\n", &a);
    printf("The address of a is: %p\n", a_ptr); // a_ptr also hold the address value. 
    printf("The dereference value of a is: %d\n", *a_ptr); // so we use * to do a dereference t get a value
    // int a = 4;
    // int* ptr = &a;

    // printf("%d\n", a); 
    // printf("%p\n", ptr); // address of a
    // printf("%d\n", *ptr); // de-reference the address of 'a' which will get the value of where 'a' located which is the value of 'a'
    // printf("%p\n", &a); // get the address of 'a'
    //
    // *ptr = 2; // change the value that store in address 'a'
    // printf("%d\n", a);
}
