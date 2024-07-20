#include <stdio.h>

int MatrisCarpim(int a[3][3], int b[3][3], int c[3][3]);

int main() {
    int i, j, k, l, m, n;
    int a[3][3], b[3][3], c[3][3];

    // Input for the first matrix (a)
    printf("1. Matrisin Elemanlarini Giriniz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d. satir %d. sutun: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Input for the second matrix (b)
    printf("2. Matrisin Elemanlarini Giriniz:\n");
    for (k = 0; k < 3; k++) {
        for (l = 0; l < 3; l++) {
            printf("%d. satir %d. sutun: ", k + 1, l + 1);
            scanf("%d", &b[k][l]);
        }
    }

    // Matrix Multiplication
    MatrisCarpim(a, b, c);

    // Display the result (matrix c)
    printf("Çarpım Matrisi:\n");
    for (m = 0; m < 3; m++) {
        for (n = 0; n < 3; n++) {
            printf("%d ", c[m][n]);
        }
        printf("\n");
    }

    return 0;
}

int MatrisCarpim(int a[3][3], int b[3][3], int c[3][3]) {
    int i, j, k;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return 0;
}
