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
// cc 0-raw.c -o 0-raw.out
// real    0m55.380s
// user    0m0.346s
// sys     0m1.755s