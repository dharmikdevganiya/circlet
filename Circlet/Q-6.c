#include <stdio.h>

void main() {
    int rows = 5;


    for (int i = 1; i <= rows; i++) {

        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }


        for (int space = 1; space <= 2 * (rows - i); space++) {
            printf("  ");
        }


        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }


        printf("\n");
    }

    return 0;
}
