#include <stdio.h>
#include <stdlib.h>

int main(){
    typedef struct {
        // char* name;
        int age;
    } Person; 

    Person person1;
    Person* person2;
    // int* person2_ptr = malloc(sizeof(Person)); // this malloc should be in main(entry point)
    person1.age = 15;
    printf("This person1 salary is %d.\n", person1.age);
    person1.age = 20;
    printf("New person1 salary is %d.\n", person1.age);
    // person2->name = "Lisa";
    person2->age = 10;
    printf("The person2 salary is %d.\n", (*person2).age);
    // printf("Pointer to person2_ptr is %p\n", person2_ptr);
    // free(person2_ptr);
}
