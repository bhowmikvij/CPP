#include<iostream>
using namespace std;
int main(){

    // BUDGET QUESTION  

    int budget;
    cout << "Enter your Budget: " << endl;

    // input
    cin >> budget;
    if(budget>200000){
        cout << "you can buy scorpio" << endl;
    }
    else {
        cout << "you can not buy scorpio" << endl;
    }

    // AGE QUESTION

    int age=100;

    if(age >= 18) {
        cout << "You can vote!" << endl;
    } 
    else {
        cout << "You can not vote." << endl;
    }

    // MARKS QUESTION

    int marks = 55;
    if (marks > 90){
        cout << "A";
    }
    else if (marks > 80){
        cout << "B";
    }
    else if (marks > 70){
        cout << "C";
    }
    else if (marks > 60){
        cout << "D";
    }
    else {
        cout << "Just Pass ";
    }

    // BMI QUESTION 

    int height;
    cout << "Enter your height in feet" << endl;
    cin >> height;

    int weight;
    cout << "Enter your weight in feet" << endl;
    cin >> weight;

    if (height > 5){

        if (weight > 70){
            cout << "you got a good BMI" << endl;
        }
        else {
            cout << "bhai tujhse na hopaega" << endl;
        }
    }
    else {
        cout << "Complan dila du" << endl;

    }

    return 0;
}