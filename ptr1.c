#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    printf("Value of x: %d\n", x);
    printf("Value of ptr (address of x): %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    *ptr = 20;
    printf("New value of x after using pointer: %d\n", x);

    return 0;
}
