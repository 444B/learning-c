#include <stdio.h>

int main() {
    int countdown = 1000000;
    while (countdown > 0) {
        // Comment out the printf inside the loop to reduce I/O operations
        countdown = countdown - 1;
    }
    // Print final countdown value
    printf("Done! Final countdown: %d\n", countdown);
    return 0;
}
// gcc 3-fresh.c -o 3-fresh.out
// real    0m0.012s
// user    0m0.004s
// sys     0m0.000s