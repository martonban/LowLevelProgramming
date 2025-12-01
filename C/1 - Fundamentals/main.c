#include <stdio.h>

int main(void) {
    // Create a number and
    int num = 100;
    int *ptr = &num;
    printf("Address of num: %d, Value: %d \n", &num, num);
    printf("Address of ptr: %d, Value: %d \n", &ptr, ptr);
    printf("----------------------------------------\n");

    // Integer value will be the integer value's memory address stored by a pointer
    int num2 = 50;
    int *ptr2 = (int *) num2;
    printf("Address of num: %d, Value: %d \n", &num2, num2);
    printf("Address of ptr: %d, Value: %d \n", &ptr2, ptr2);
    printf("----------------------------------------\n");

    //Simple Usage  * = indirect operator
    int num3 = 69;
    int* ptr3 = &num3;
    printf("Value of num3: %d\n", num3);
    // Change Value throw the ptr3
    *ptr3 = 420;
    printf("Value of num3: %d\n", num3);
    printf("----------------------------------------\n");

    // Void Pointer Example
    int num4;
    int *ptr4 = &num;
    printf("Value of ptr4: %d\n", ptr4);
    void *ptr_v1 = ptr4;
    ptr4 = (int*) ptr_v1;
    printf("Value of ptr4: %d\n", ptr4);
    printf("----------------------------------------\n");

    // Change void pointer - reference
    int num5 = 420;
    void *ptr_v2 = &num5;
    printf("Value of num5: %d\n", num5);
    *(int*) ptr_v2 = 69;
    printf("Value of num5: %d\n", num5);
    printf("----------------------------------------\n");



    return 0;
}