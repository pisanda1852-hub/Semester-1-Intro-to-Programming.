#include <stdio.h>
int main() {
    int x = 10, y = 20;
    if (x > 0) {
        if (y > 0) {
            printf("Path A: Both postive\n");
        } else {
            printf("Path B: x positive, y non-positive\n");
        }
    } else { 
        if (y>0) {
            printf("Path C: x non-positive, y positive\n");
        } else {
            printf("Path D: Both non-positive\n");
        }
        }
    return 0;
}