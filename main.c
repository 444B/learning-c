// recursion example by counting down from 10 to 1

#include <stdio.h>

void countDown(int n) {
    if (n == 0) {
        printf("Blastoff!\n");
    } else {
        printf("%d\n", n);
        countDown(n - 1);
    }
}

int main() {
    countDown(10);
    return 0;
}   