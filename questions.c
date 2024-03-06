int array[2];
array[0] = 69;
array[1] = 420;

for (int i=0; i < 2; i++){
    printf("array[%d] = %d\n", i, array[i]);
}

int main() {

    return 0;
}

// ^ this doesnt work

int main() {

        int array[2];
        array[0] = 69;
        array[1] = 420;

        for (int i=0; i < 2; i++){
            printf("array[%d] = %d\n", i, array[i]);
        }
    return 0;
}

// ^ but this does