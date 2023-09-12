#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "basecalc.h"

void start_calculator();

int main(void) 
{
    start_calculator();
    return 0;
}

void start_calculator() 
{
    int* digits = malloc(sizeof(int) * 10);

    printf("Enter first digit: ");
    scanf("%i", &digits[0]);
    printf("Enter second digit: ");
    scanf("%i", &digits[1]);

    int result = sum(digits, 2);
    printf("Sum of digits: %i\n\n\n", result);
    free(digits);
    start_calculator();
}
