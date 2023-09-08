#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void start_calculator();
int sum(int* digits, int digits_count);

void main(void) 
{
    start_calculator();
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

int sum(int* digits, int digits_count)
{
    int sum = 0;
    for(int index = 0; index < digits_count; index++)
    {
        sum += digits[index];
    }
    return sum;
}