#include <stdio.h>

int main() {
    int high_number = 2;
    int low_number = 6655;

    int* high_number_pointer = &high_number;
    int* low_number_pointer = &low_number;
    //TODO:
    // Please fix the problem and swap the value of the variables,
    // without using the "high_number" and the "low_number" variables.

    int temp = *high_number_pointer;
    *high_number_pointer = *low_number_pointer;
    *low_number_pointer = temp;

    printf("high_number_pointer's value is %i, low_number_pointer's value is: %i.\n", *high_number_pointer, *low_number_pointer);

    return 0;
}