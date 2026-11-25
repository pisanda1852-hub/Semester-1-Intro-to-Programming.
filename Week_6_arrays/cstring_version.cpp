#include <iostream>
#include <cstring> // for strlen, strcpy
using namespace std;
int main(){
    char name[50];
    cout << " Enter your name: ";
    cin.getline(name, 50); // Reads a full line into the C -string
    cout << "Name: " << name << endl;
    cout << "Lenght: " << strlen(name) << endl;
    cout << "First character: " << name[0] << endl;
    char copy[50];
    strcpy(copy, name);
    cout << "Copy: " << copy << endl;
    return 0;
}