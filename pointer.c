#include <stdio.h>
#include <string.h>

int main(){
    char* text = "Hello";

    printf("Address of string is: %p\n", &text);
    printf("Value of first char of string is: %c\n", *text);
    printf("Value of second char of string is: %c\n", *(text+1));
    printf("This is different definition: %c\n", *text+1);
    printf("Size of string is: %lu\n", strlen(text));
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
