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
    countDown(1000000);
    return 0;
}   
