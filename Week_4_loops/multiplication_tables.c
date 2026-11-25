#include <stdio.h>
int main() {
    printf("     MULTIPLICATION TABLES ( 1-10)\n");
    for (int i= 1; i<=10; i++){
        for (int j = 1; j <= 10; j++){
            printf("%5d", i*j);

        }
        printf("\n");
        printf("THANL YOU FOR USING MULTIPLICATIONS TABLES\n");
        return 0;
    }
    
}
