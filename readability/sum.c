#include <stdio.h>

int main() {
    int numbers[5] = {2, 4, 6, 8, 10};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    printf("The sum of the array elements is: %d\n", sum);
    return 0;
}
