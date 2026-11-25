#include <iostream>
using namespace std;
void createLeak(){
    int* ptr = new int(42);
    cout << "Inside function. The value is: " << *ptr << endl;
    cout << "Memory allocated atv address: " << ptr << endl;
}
int main() {
    cout << "Calling function that leaks memory..." << endl;
    createLeak();
    cout << "Function finished. The memory is now leaked." << endl;
    return 0;
}
void fixLeak() {
    int* ptr = new int (42);
    cout << "Inside fixed fucntion. Value: " << *ptr << endl;
    cout << "Memory allocated at address: " << ptr  << endl;
    delete ptr;
    ptr = nullptr;
    cout << "Memory has been successfully freed." << endl;
}
int main() {
    cout << "--- Testing the fix ---" << endl;
    fixLeak();
    return 0;
}
