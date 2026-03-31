#include <stdio.h>

int main() {
    int a = 10;        // normal variable
    int *p;            // pointer variable

    p = &a;            // storing address of 'a' in pointer

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Pointer p stores address: %p\n", p);
    printf("Value at address p: %d\n", *p);

    return 0;
}
