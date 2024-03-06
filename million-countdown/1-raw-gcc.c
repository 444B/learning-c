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
// gcc 1-raw-gcc.c -o 1-raw-gcc.out
// real    0m49.411s
// user    0m0.368s
// sys     0m2.142s