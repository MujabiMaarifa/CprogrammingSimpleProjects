//This program should display even numbers between 1 and 20 and sum them

#include <stdio.h>

int main () {
    int sum = 0;
    int i;

    for (i = 2; i <= 20; i += 2) {
        printf("%d ", i);
        sum += i;
    }

    printf("\nSum of even numbers between 1 and 20: %d\n", sum);

    return 0;
}