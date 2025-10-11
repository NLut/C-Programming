#include <stdio.h>

int main(){
    int myNumber[] = {1, 2, 3 ,4};
    printf("%d\n", myNumber[0]); // result is 1

    myNumber[0] = 0;
    printf("%d\n", myNumber[0]); // result is 0

    printf("The size of my array is: ");
    printf("%ld\n", sizeof(myNumber)); // size is 20 b/c each element of int is 4 bytes
    
    printf("The length of array is: ");
    printf("%ld\n", (sizeof(myNumber)/sizeof(myNumber[0])));
}
