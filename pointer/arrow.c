#include <stdio.h>
struct Person {
    char name[50];
    int age;
};

struct Person person1;
struct Person *person2;

int main(){
    person1.age = 15;
    printf("This person1 salary is %d.\n", person1.age);
    person1.age = 20;
    printf("New person1 salary is %d.\n", person1.age);
    person2->age = 10;
    printf("The person2 salary is %d.\n", person2->age);
}
