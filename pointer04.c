#include <stdio.h>

int main() {
    int numbers[] = {5, 6, 7, 8, 9};
    int* number_pointer;
    //TODO:
    // The "number_pointer" should point to the first element of the array called "numbers",
    // than please print its value with it.

    //Solution 1:
    //number_pointer = &numbers[0];

    //Solution 2:
    number_pointer = numbers;

    printf("The first element of numbers array is: %i\n", *number_pointer);

    return 0;
}