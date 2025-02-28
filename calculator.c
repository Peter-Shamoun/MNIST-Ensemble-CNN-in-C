#include <stdio.h>

int add_two_numbers(int int_1, int int_2) {
    return int_1 + int_2;
}

int subtract_two_numbers(int int_1, int int_2) {
    return int_1 - int_2;
}

float multiply_two_numbers (float float_1, float float_2) {
    return float_1 * float_2;
}

float divide_two_numbers (float float_1, float float_2) {
    return float_1 / float_2;
}

int main() {

    int int_1, int_2;
    float float_1, float_2;

    printf("Enter Two Integers to Add and Subtract: \n");
    scanf("%d %d", &int_1, &int_2);
    
    int sum = add_two_numbers(int_1, int_2);
    printf("\nThe sum of %d and %d is %d\n", int_1, int_2, sum);

    int diff = subtract_two_numbers(int_1, int_2);
    printf("\nThe difference of %d and %d is %d\n", int_1, int_2, diff);

    printf("Enter Two Floats to Multiply and Divide: \n");

    scanf("%f %f", &float_1, &float_2);
    float prod = multiply_two_numbers(float_1, float_2);

    printf("\nThe product of %f and %f is %f\n", float_1, float_2, prod);

    float div = divide_two_numbers(float_1, float_2);
    printf("\nThe division of %f and %f is %f\n", float_1, float_2, div);

    return 0;
}