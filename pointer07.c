#include <stdio.h>

int main() {
    int high_number = 6655;
    int low_number = 2;

    int* high_number_pointer = &low_number;
    int* low_number_pointer = &high_number;
    //TODO:
    // Please fix the problem and swap where the pointers point,
    // without using the "&" operator.

    int* temp = high_number_pointer;
    high_number_pointer = low_number_pointer;
    low_number_pointer = temp;

    printf("high_number_pointer's value is %i, low_number_pointer's value is: %i.\n", *high_number_pointer, *low_number_pointer);

    return 0;
}