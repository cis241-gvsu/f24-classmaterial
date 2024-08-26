/*
Perform matrix-vector multiplication. This program has several bugs.
*/
#include <stdio.h>
#include <stdlib.h>

int* fill_vec(int* vec, int n) {
    int* filled_vec;
    filled_vec = malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++) {
        filled_vec[i] = 2*i;
    }
    return filled_vec;
}


int main() {
    int m = 4;
    int n = 2;

    // mat is an m x n matrix
    int *out, *vec, *mat;
    out = malloc(sizeof(int)*m);
    vec = fill_vec(vec, n);
    mat = fill_vec(mat, m*n);

    int sum = 0;
    for (int row = 0; row < m; row++) {
        for (int col = 0; col < n; col++) {
            sum += vec[col]*mat[row*m + col];
        }
        out[row] = sum;
    }

    printf("Output vector:\n");
    for (int i = 0; i < m; i++) {
        printf("%d\n", out[i]);
    }

    free(out); free(vec); free(mat);
    return 0;
}
