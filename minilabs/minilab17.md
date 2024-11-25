# Minilab 17 - Memory Leak

Suppose you have the following code:

```
#include <stdio.h>
#include <stdlib.h>

typedef struct Blah{
    char c;
    double *p;
    int i;
} Blah;

void bar(double **p1, int j, int n) {
    double q = (double) j;
    *p1 = (double *) malloc(sizeof(double)*n);

    for(int i=0; i<n; i++) {
        (*p1)[i] = q * i;
    }

}

Blah* foo(Blah *p, int n1, int n2) {
    Blah *b = (Blah *) malloc(sizeof(Blah)*n1);

    Blah *b2 = b;

    for (int i=0; i<n1; i++) {
        (*b).c = p->c;
        (*b).i = i;
        bar(&(b->p), i, n2);

        b++;

    }
    free(p);

    return b2;
}

int main(void) {
    int a = 10;
    int b = 20;
    double tot = 0;

    Blah *p = (Blah *) malloc(sizeof(Blah));
    p->c = 'a';

    p = foo(p, a, b);


    for(int i=0; i<a; i++) {
        
        for (int j=0; j<b; j++) {
            
            tot += ((*(p+i)).p)[j];

        }
        free(p[i].p);
    }
    free(p);

    return 0;
}
```

Without deleting or changing any lines (e.g. by only adding lines),
how do you fix the memory leak?
