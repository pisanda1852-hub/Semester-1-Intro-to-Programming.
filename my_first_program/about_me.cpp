#include<iostream>
using namespace std;

int main() {
    
      //==============================================
      //VARIABLE DECLARATION
      //These are the "storage boxes" where we keep user answers
      //==============================================
      string name;             //Stores the user's name (text)
      string course;          //Stores the user's course (BBIT or BCS)
      string hobby;           //Stores the user's hobby (text)
      string reason;         //Stores the reason for choosing the course (text)
      string expectation;    //Stores what they expect to learn
      string definition;      //Stores their definition of programming (text)
      //==============================================
      //QUESTION 1: name 
      //==============================================
      cout << "WELCOME TO YOUR FIRST PROGRAM" << endl;
      cout << "===============================================" << endl;
      cout << "1. What is your name ? : ";
      getline(cin , name); //read the full line ( including spaces)
      cout << endl;
      //==============================================
      // QUESTION 2: course (BBIT or BCS)
      //==============================================
      cout << "2. What course are you doing ? (BBIT or BCS): ";
      getline(cin , course);
      //==============================================
      // QUESTION 2: HOBBY
      //==============================================
      cout << "3. What is yout hobby ? ";
      getline(cin , hobby);
      //==============================================
      // QUESTION 4: REASON FOR CHOOSING THE COURSE 
      //==============================================
      getline(cin , reason);
      //==============================================
      // QUESTION 5: EXPECTATION
      //==============================================
      cout << "4. What do you expect to learn in programming? ";
      getline(cin , expectation);
      //==============================================
      // QUESTION 6: DEFINITION OF PROGRAMMING
      //==============================================
      cout << "6. in your own words, what is programming ? ";
      getline(cin , definition);
      //==============================================
      //DISPLAY THE SUMMARY 
      //==============================================
      cout <<endl;
      cout << "========================================" <<endl;
      cout << " YOUR PROFILE SUMMARY"                    <<endl;
      cout << "========================================" <<endl;
      cout << endl;
      cout << "Name: " << name <<endl;
      cout << "Course: "<< course <<endl;
      cout << "Hobby: "<< hobby <<endl;
      cout << "Reason: "<< reason <<endl;
      cout << "Expectation: "<<expectation <<endl;
      cout << "Programming is: "<<definition <<endl;
      cout <<endl;
      cout <<"==================================="<<endl;
      cout <<" Thank you for completing this!"    <<endl;
      cout <<"==================================="<<endl;
      
      return 0;
}