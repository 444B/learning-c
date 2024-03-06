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
// running this with cc million-countdown.c -o million-countdown