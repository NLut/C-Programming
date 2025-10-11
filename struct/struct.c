#include <stdio.h>

struct man {
    int age;
    char name[10];
};

int main(){
    struct man tim = {15, "tim"};
    printf("His name is %s and his age is %d\n", tim.name, tim.age);
    return 0;
}
