#include <stdio.h>
#include <math.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);


    double sqrt_num = sqrt(x);


    int b = (int) sqrt_num;
    if (sqrt_num == b) {
        printf("Perfect Square\n");
    } else {
        printf("Not Perfect Square\n");
    }

    return 0;
}

