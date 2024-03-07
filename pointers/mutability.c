#include <stdio.h>

void addTen(int num) {
    num += 10; // This modifies only the copy of the variable
}

int main() {
    int x = 5;
    printf("1. x is %d\n", x);
    addTen(x); // x is still 5 after this function call
    printf("2. x is %d\n", x);
    return 0;
}




// void addTen(int *num) {
//     *num += 10; // This modifies the original variable
// }

// int main() {
//     int x = 5;
//     addTen(&x); // x becomes 15 after this function call
//     return 0;
// }
