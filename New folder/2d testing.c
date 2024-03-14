#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int matrix[MAX_SIZE][MAX_SIZE], n, mod, i, j, sum;

    printf("Enter the size of the square matrix (maximum size is %d): ", MAX_SIZE);
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter the modulo value: ");
    scanf("%d", &mod);

    sum = 0;
    for (i = 0; i < n; i++) {
        sum += matrix[i][n-i-1];
    }

    printf("The sum of the anti-diagonal elements is: %d\n", sum % mod);

    return 0;
}
