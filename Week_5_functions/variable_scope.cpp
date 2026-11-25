#include <iostream>
using namespace std;
int globalCounter = 100;
void displayGlobal() {
    cout << "Inside displayGLobal: globalCounter = " << globalCounter << endl;
    // cout << localCounter;// ERROR: localCounter is not declared here
}
void modifyGlobal() {
    globalCounter = 500;
    cout << "Inside modifyGlobal: globalCounter changed to" << globalCounter << endl;
}
void localDemo() {
    int globalCounter = 999; // This SHADOWS the global variable 
    cout << "Inside localDemo: globalCounter = " << globalCounter << endl;
}
int main() {
    int localCounter = 50;
    cout << "In main: globalCounter = " << globalCounter << endl;
    cout << "In main: localCounter = " << localCounter << endl;
    displayGlobal();
    modifyGlobal();
    localDemo();
    cout << "Back in main: globalCounter = " << globalCounter << endl;
    return 0;
}
