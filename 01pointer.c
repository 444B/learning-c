#include <stdio.h>

// Function prototype declaration
void modify(int *ptr, int y);

int main() {
    int x = 0; // Initial value of x
    printf("Before modify(): x = %d\n", x);
    
    // Call modify() and pass the address of x
    modify(&x, 66);
    
    printf("After modify(): x = %d\n", x);
    return 0;
}

// Function definition
void modify(int *ptr, int y) {
    // Dereference ptr to access the variable x and change its value
    *ptr = y;
}


// output
// Before modify(): x = 0
// After modify(): x = 66