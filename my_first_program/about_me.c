#include <stdio.h>
#include <string.h>
#define MAX_LEN 100
int main() {
    //==============================================
    //VARIABLE DECLARATION
    //These are the "storage boxes" where we keep user answers
    //==============================================
    char name[MAX_LEN];             //Stores the user's name (text)
    char course[MAX_LEN];          //Stores the user's course (BBIT or BCS)
    char hobby[MAX_LEN];           //Stores the user's hobby (text)
    char reason[MAX_LEN];         //Stores the reason for choosing the course (text)
    char expectation[MAX_LEN];    //Stores what they expect to learn
    char definition[MAX_LEN];      //Stores their definition of programming (text)
    //==============================================
    //QUESTION 1: name 
    //==============================================
    printf("WELCOME TO YOUR FIRST PROGRAM\n");
    printf("===============================================\n");
    printf("1. What is your name ? : ");
    fgets(name, MAX_LEN, stdin); //read the full line ( including spaces)
    name[strcspn(name, "\n")] = '\0';
    //==============================================
    // QUESTION 2: course (BBIT or BCS)
    //==============================================
    printf("2. What course are you doing ? (BBIT or BCS): ");
    fgets(course, MAX_LEN, stdin);
    course[strcspn(course, "\n")] = '\0';
    //==============================================
    // QUESTION 3: hobby
    //==============================================
    printf("3. What is your hobby ? : ");
    fgets(hobby, MAX_LEN, stdin);
    hobby[strcspn(hobby, "\n")] = '\0';
    //==============================================
    // QUESTION 4: reason
    //==============================================
    printf("4. Why did you choose this course ? : ");
    fgets(reason, MAX_LEN, stdin);
    reason[strcspn(reason, "\n")] = '\0';
    //==============================================
    // QUESTION 5: expectation
    //==============================================
    printf("5. What do you expect to learn in this course ? : ");
    fgets(expectation, MAX_LEN, stdin);
    expectation[strcspn(expectation, "\n")] = '\0';
    //==============================================
    // QUESTION 6: definition
    //==============================================
    printf("6. How would you define programming ? : ");
    fgets(definition, MAX_LEN, stdin);
    definition[strcspn(definition, "\n")] = '\0';
return 0;
}