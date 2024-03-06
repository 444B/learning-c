//first iteration
# include <stdio.h>

int main() {

    int countdown = 1000000;
    while(countdown > 0){
        printf("%d\n", countdown);
        countdown=countdown-1;
    }

    return 0;
}
// gcc -O2 2-raw-gcc-optimized.c -o 2-raw-gcc-optimized.out
// real    0m49.525s
// user    0m0.283s
// sys     0m1.716s
