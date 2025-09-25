#include<stdio.h>

int main(void)
{
    int n;
    printf("How many numbers do you wish to enter?  ");
    if (scanf("%i", &n) != 1 || n != 5) {
        printf("Invalid number of inputs.\n");
        return 1;
    }

    int x, y, z, w, v;
    printf("Enter 5 real numbers:  ");
    if (scanf("%f%f%f%f%f", &x, &y, &z, &w, &v) != 5 ){
        printf("Didn't get 5 numbers?\n");
        return 1;
    }

    int max;
    max = (x > y) ? x : y;
    max = (z > max) ? z : max;
    max = (w > max) ? w : max;
    max = (v > max) ? v : max;
    printf("Maximum value: %i\n", max);
}
