// #include <stdio.h>
// #include <stdlib.h>


// int main(){

//     int var1 = 111;
//     int var2 = 222;

//     int *ptr = &var2;

//     printf("var1: = %d\n", var1);
//     printf("var1: = %d\n", var2);
//     printf("point is to %d\n", *ptr);

//     printf(" Updating pointer");
//     return 0;
// }


// GPT version
#include <stdio.h>

int main() {
    int x = 20;
    int *p = &x; // Pointer p holds the address of x

    printf("Value of x: %d\n", x); // Prints the value of x
    printf("Address of x: %p\n", (void*)&x); // Prints the address of x
    printf("Value of pointer p: %p\n", (void*)p); // Prints the address stored in p
    printf("Value pointed to by p: %d\n", *p); // Dereferences p and prints the value of x

    *p = 30; // Dereferencing p to change the value of x
    printf("New value of x: %d\n", x); // Prints the new value of x

    return 0;
}
