#include <stdio.h>

int a = 5;        // global variable
int b;            // uninitialized global variable

int sum(int x, int y) {
    return x + y;
}

int main() {
    int c = sum(a, 10);
    printf("%d\n", c);
    return 0;
}

