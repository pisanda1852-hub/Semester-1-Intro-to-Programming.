#include <stdio.h>
int globalCounter = 100;
void displayGlobal() {
    printf("Inside displayGlobal: globalCounter = %d\n", globalCounter);
    }
    void modifyGlobal () {
        globalCounter = 500;
    }
    void localDemo (){
        int globalCounter = 999;
        printf("Inside localDemo: globalCounter = %d\n", globalCounter);
    }
    int main() {
        int localCounter = 50;
        printf("In main: globalCounter = %d\n", globalCounter);
        printf("In main: localCounter = %d\n", localCounter);
        displayGlobal();
        modifyGlobal();
        localDemo();
        printf("Back in main: globalCounter = %d\n", globalCounter);
        printf("%d", localCounter);
        return 0;
    }