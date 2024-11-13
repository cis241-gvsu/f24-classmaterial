# Minilab 16 - 2D Arrays

## 2D Arrays - Stack

### Part 1

Create a $6 \times 5$ 2D array of doubles named `mat_stack`.
Print out the name of the array as a pointer.
What memory address do you get?


### Part 2
Given your answer to part 1,
and without programming to find the answer,
what would be the output of the following lines?
```
printf("%p\n", &(mat_stack[0][0]));
printf("%p\n", &(mat_stack[0][1]));
printf("%p\n", &(mat_stack[1][0]));
printf("%p\n", &(mat_stack[2][0]));
```
<br><br><br>

### Part 3
Given your answer to parts 1 and 2,
and without programming to find the answer,
what would be the output of the following lines?
```
printf("%p\n", &(mat_stack[0][0])+1);
printf("%p\n", &(mat_stack[1][0])+2);
printf("%p\n", &(mat_stack[1][0])+5);
```
<br><br><br>

### Part 4
Given your answer to the part 1,
and without programming to find the answer,
what would be the output of the following lines?
```
printf("%p\n", mat_stack + 1);
printf("%p\n", mat_stack + 2);
printf("%p\n", mat_stack + 6);
```
<br><br><br>

### Part 5
Given your answer to the previous parts,
and without programming to find the answer,
what would be the output of the following lines?
```
printf("%p\n", mat_stack[1]);
printf("%p\n", *(mat_stack+1));
printf("%p\n", mat_stack[1]+2);
```
<br><br><br>


