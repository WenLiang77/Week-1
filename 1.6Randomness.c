#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int plus_cnt = 0, minus_cnt = 0;
    int median = RAND_MAX / 2;
    srand(time(NULL)); 

    for (int i = 0; i < 500; i++) {
        int r = rand();
        if (r < median)
            minus_cnt++;
        else
            plus_cnt++;
        printf("%d\n", plus_cnt - minus_cnt);
    }

    return 0;
}