// create a file that makes a directory called 'test'
// and then creates a file called 'test.txt' in that directory
// and writes 'hello world' to that file
// then reads the file and prints the contents to the console

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>


int main() {
    // create a directory called 'test'
    if (mkdir("test", 0777) == -1) {
        perror("Error creating directory");
        return 1;
    }

    // create a file called 'test.txt' in the 'test' directory
    char filepath[100];
    snprintf(filepath, sizeof(filepath), "test/test.txt");
    int fd = open(filepath, O_CREAT | O_WRONLY, 0644);
    if (fd == -1) {
        perror("Error creating file");
        return 1;
    }

    // write 'hello world' to the file
    char message[] = "hello world";
    if (write(fd, message, strlen(message)) == -1) {
        perror("Error writing to file");
        return 1;
    }

    // close the file
    close(fd);

    // read the file and print the contents to the console
    char buffer[100];
    fd = open(filepath, O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }

    ssize_t bytesRead = read(fd, buffer, sizeof(buffer) - 1);
    if (bytesRead == -1) {
        perror("Error reading file");
        return 1;
    }

    buffer[bytesRead] = '\0';
    printf("File contents: %s\n", buffer);

    // close the file
    close(fd);

    return 0;
}