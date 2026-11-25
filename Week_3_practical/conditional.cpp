#include <iostream>
using namespace std;
int main () { 
    int age;
    bool hasTicket;
    bool isMember;
    bool isBanned;
    cout << "Enter age";
    cin >> age;
    cout << "Do you have a ticket? (1 for yes, 0 for no):";
    cin >> hasTicket;
    cout << "Are you a member? (1 for yes, 0 for no):";
    cin >> isMember;
    cout << "Are you banned (1 for yes, 0 for no):";
    cin >> isBanned;
    // Eligible if: age >= 18 AND has ticket AND NOT banned
    // OR: is a member AND NOT banned 
    // if age < 16, they need a parent ( use a new bool hasParent variable) to enter the event.
    bool hasParent = false;
    if (age < 16) {
        cout << "Do you have a parent with you? (1 for yes, 0 for no):";
        cin >> hasParent;
    }
    bool canEnter = (age >= 18 && hasTicket && !isBanned) || (isMember && !isBanned) || (age < 16 && hasParent);
    if (canEnter) {
        cout<< "You can enter the event!" <<endl;
    } else {
        cout << "Sorry, you cannot enter." << endl;
    } 
    

    return 0;
}