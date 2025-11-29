#include <stdio.h>

int main(void) {
    // Create a number and
    int num = 100;
    int *ptr = &num;
    printf("Address of num: %d, Value: %d \n", &num, num);
    printf("Address of ptr: %d, Value: %d \n\n\n", &ptr, ptr);

    // Integer value will be the integer value's memory address stored by a pointer
    int num2 = 50;
    int *ptr2 = (int *) num2;
    printf("Address of num: %d, Value: %d \n", &num2, num2);
    printf("Address of ptr: %d, Value: %d \n", &ptr2, ptr2);

    return 0;
}