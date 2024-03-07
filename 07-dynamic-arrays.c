#include <stdio.h>
#include <stdlib.h>

int main() {

    int sizeOfArray=0;
    scanf("%d", &sizeOfArray);
    
    int* dynamicArray = malloc(sizeof(int)*sizeOfArray);
    for (int i = 1; i-1< sizeOfArray; i++) {
        dynamicArray[i] = i*i;
        printf("Value: %d\n", dynamicArray[i]);
    }
    free(dynamicArray);
    return 0;
}