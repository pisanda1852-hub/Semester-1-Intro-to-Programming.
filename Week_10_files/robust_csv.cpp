#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdexcept>
using namespace std;
int main(){
    ifstream file("students.csv");
    if (!file.is_open()) {
        cout << "Error: Could not find students.csv!" << endl;
        return 1;
    }
    string line;
    cout << "---- Processing Student Records ---" << endl;
    while (getline(file, line)) {
        if (line.empty()) continue;
        stringstream ss(line);
        string name;
        string scoreStr1, scoreStr2, scoreStr3;
        if (!getline(ss, name, ',') ||
            !getline(ss, scoreStr1, ',') ||
            !getline(ss, scoreStr2, ',') ||
            !getline(ss, scoreStr3, ',')) {
            cout << "WARNING: Skipping malformed record (Missing score data)." << endl;
            continue;
        }
        try {
            int s1 = stoi(scoreStr1);
            int s2 = stoi(scoreStr2);
            int s3 = stoi(scoreStr3);
            double average = (s1 + s2 + s3) / 3.0;
            cout << name << " -> Average: " << average << endl;
        } catch (const invalid_argument& e) {
            cout << "WARNING: Skipping malformed record for " << name
                 << " (Invalid score data)." << endl;
        } catch (const out_of_range& e) {
            cout << "WARNING: Skipping malformed record for " << name
                 << " (Score out of range)." << endl;
        }
    }
    file.close();
    cout<< "\n--- processing Complete ---" << endl;
    return 0;
}