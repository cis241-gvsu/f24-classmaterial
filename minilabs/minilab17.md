## 2D Arrays - Dynamically Allocated

### Part 1

Create a 2D array on the heap to represent the same
$6 \times 5$ 2D array of doubles using the following
(note:  you'll have to define `nrows` and `ncols`)
```
double *mat_dynamic1 = (double *) malloc(sizeof(double)*nrows*ncols);
```
Print out the `mat_dynamic1` variable and then
answer the following questions:
1. What memory address do you get?
2. How would you access the element (the actual value)
   at row index 2 and column index 3?

### Part 2

Create a 2D array on the heap to represent the same
$6 \times 5$ 2D array of doubles using the following
(note:  you'll have to define `nrows` and `ncols`)
```
int **mat_dyanmic2 = (int **) malloc(nrows*sizeof(int *));
for (int i=0; i<nrows; i++) {
    *(mat_dyanmic2+i) = (int *) malloc(ncols*sizeof(int));
}
```

Print out the `mat_dynamic2` variable and `mat_dynamic2[1]`
and then answer the following questions:
1. What memory addresses do you get?
2. What would be the output of the following lines:
```
printf("%p\n", mat_dynamic2+1);
printf("%p\n", *(mat_dynamic2+1));
printf("%p\n", mat_dynamic2[3]);
printf("%p\n", *(mat_dynamic2+1) + 2);
```

### Part 3

Create a 2D array on the heap to represent the same
$6 \times 5$ 2D array of doubles using the following
(note:  you'll have to define `nrows` and `ncols`)
```
int *A = (int *) malloc(nrows*ncols*sizeof(int));
int **mat_dynamic3 = (int **) malloc(nrows*sizeof(int *));
for (int i=0; i<nrows; i++) {
    *(mat_dynamic3+i) = A+i*ncols;
}
```
Print out `mat_dynamic3` and `A`
and then answer the following questions:
1. What memory addresses do you get?
2. What would the following lines print?
```
printf("%p\n", mat_dynamic3+1);
printf("%p\n", *(mat_dynamic3+1));
printf("%p\n", mat_dynamic3[3]);
printf("%p\n", *(mat_dynamic3+1) + 2);
printf("%p\n", A+3);
```

<br><br><br>

