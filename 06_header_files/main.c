#include <stdio.h>
#include "myutils.h" // Include your custom header file

int main() {
    int sum = add(5, 3);
    int difference = subtract(10, 4);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);

    return 0;
}
