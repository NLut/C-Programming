#include <stdio.h>

typedef struct {
    int age;
    char name[10];
} man;

int main(){
    man tim = {12, "tim"};
    printf("His name is %s and his age is %d\n", tim.name, tim.age);
    return 0;
}
