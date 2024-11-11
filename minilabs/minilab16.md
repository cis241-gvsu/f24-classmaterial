# Minilab 16

## 2D Arrays

### Part 1

Create a $6 \times 5$ 2D array of doubles named `arr2d`.
Print out the name of the array as a pointer.
What memory address do you get?


### Part 2
Given your answer to the previous one (and without
programming to find the answer),
what would be the output of the following lines?
```
printf("%p\n", &arr2[0][0]);
printf("%p\n", &arr2[0][1]);
printf("%p\n", &arr2[1][0]);
```

### Part 3
Given your answer to the previous one (and without
programming to find the answer),
what would be the output of the following lines?
```
printf("%p\n", arr2[0][0]+1);
printf("%p\n", arr2[0][1]+2);
printf("%p\n", arr2[1][0]+5);
```


### Part 4
Given your answer to the previous one (and without
programming to find the answer),
what would be the output of the following lines?
```
printf("%p\n", arr2d + 1);
printf("%p\n", arr2d + 2);
```
