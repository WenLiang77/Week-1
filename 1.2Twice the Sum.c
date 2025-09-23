#include<stdio.h>

int main(void)
{
    int a, b, c, twice_sum;
    a = 2;
    b = 3;
    c = 7;
    twice_sum  = 2 * (a + b + c) +7 ;

    printf("Input three integers: %i %i %i\n", a, b, c);
    printf("Twice the sum of integers plus 7 is %i !\n", twice_sum);
    return 0;
}