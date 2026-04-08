#include <stdio.h>
int main() {
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{1, 0, 1}, {0, 1, 0}, {1, 1, 1}};
    int res[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            res[i][j] = 0;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Resultant Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}