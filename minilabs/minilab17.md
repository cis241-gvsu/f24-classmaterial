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
    // line 13
    for(int i=0; i<n; i++) {
        (*p1)[i] = q * i;
    }
    // line 17
}

Blah* foo(Blah *p, int n1, int n2) {
    Blah *b = (Blah *) malloc(sizeof(Blah)*n1);
    // line 22
    Blah *b2 = b;
    // line 24
    for (int i=0; i<n1; i++) {
        (*b).c = p->c;
        (*b).i = i;
        bar(&(b->p), i, n2);
        // line 29
        b++;
        // line 31
    }
    // line 33
    return b2;
}
    // line 36
int main(void) {
    int a = 10;
    int b = 20;
    double tot = 0;
    // line 41
    Blah *p = (Blah *) malloc(sizeof(Blah));
    p->c = 'a';
    // line 44
    p = foo(p, a, b);
    // line 46
    // line 47
    for(int i=0; i<a; i++) {
        // line 49
        for (int j=0; j<b; j++) {
            // line 51
            tot += ((*(p+i)).p)[j];
            // line 53
        }
        // line 55
    }
    // line 57
    return 0;
}
```

Without deleting or changing any lines (e.g. by only adding lines),
how do you fix the memory leak?

