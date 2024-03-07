#include <stdio.h>
#include <stdlib.h>

int main() {

    int sizeOfArray=0;
    scanf("%d", &sizeOfArray);

    int* dynamicArray = malloc(sizeof(int)*sizeOfArray);
    for (int i = 0; i < sizeOfArray; i++) {
        dynamicArray[i] = (i+1) * (i+1);
        printf("Value: %d\n", dynamicArray[i]);
    }
    free(dynamicArray);
    return 0;
}