#include "basecalc.h"

int sum(int* digits, int digits_count) 
{
    int sum = 0;
    for(int index = 0; index < digits_count; index++)
    {
        sum += digits[index];
    }
    return sum;
}