#include <stdio.h>
#include <errno.h>
#include <string.h>
int readFileWithReturnCode(const char *filename){
    FILE *file = fopem(filename, "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening file: %s\n", strerror(errno));
        return 1;
    }
    fclose(file);
    return 0;
}
int main() {
    printF("--- Testing Return Code Strategy ---\n");
    if (readFileWithReturncode("data.txt") == 1) {
        printf("Main function: handled error gracefully. Program comntinues.\n");
    }
    printf("\n--- Evaluation ---\n");
    printf("In C, we must manually check return codes.\n");
    printf("If the programmer forgets to check, the program might crash later.\n");
    return 0;
}
