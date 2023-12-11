/*--------------------------------------------------------------------------------------------------------------------------
Name Course Project No. Due date
Sakara Anderson CMPS 367
October 27, 2023
Purpose.
a. For this problem, you will create a C++ console app, where you will ask the user for birthday date by month, day and year (2000-2023).
--------------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

struct Birthday {
    int month;
    int day;
    int year;
};

int main() {
    char choice;
    while (true) {
        cout << "Welcome to Birthday Date Meaning Generator!" << endl;
        cout << endl;
        
        Birthday userBirthday; // Create an object of the Birthday struct
        
        cout << "Please enter the month of your birthday: ";
        cin >> userBirthday.month;
        if (userBirthday.month < 1 || userBirthday.month > 12) {
            cout << "Invalid month. Please enter a valid month (1-12)." << endl;
            cout << endl;
            continue;
        }
        
        cout << endl;
        cout << "Please enter the day of your birthday: ";
        cin >> userBirthday.day;
        if (userBirthday.day < 1 || userBirthday.day > 31) {
            cout << "Invalid day. Please enter a valid day (1-31)." << endl;
            cout << endl;
            continue;
        }
        
        cout << endl;
        cout << "Please enter the year of your birthday (2000-2023): ";
        cin >> userBirthday.year;
        if (userBirthday.year < 2000 || userBirthday.year > 2023) {
            cout << "Invalid year. Please enter a year between 2000 and 2023." << endl;
            cout << endl;
            continue;
        }
        
        cout << endl;
        cout << "The month of ";
        switch (userBirthday.month) {
            case 1:
                cout << "January";
                break;
            case 2:
                cout << "February";
                break;
            // Add cases for other months here
            default:
                cout << "Invalid month";
                break;
        }
        cout << " means ";

        switch (userBirthday.day) {
            case 1:
                cout << "Self-Started";
                break;
            case 2:
                cout << "Another meaning for day 2";
                break;
            // Add meanings for other days here
            default:
                cout << "Invalid day";
                break;
        }

        cout << endl;
        cout << endl;

        cout << "The year of " << userBirthday.year << " means ";
        if (userBirthday.year >= 2000 && userBirthday.year <= 2023) {
            cout << "that you are millennial";
        } else {
            cout << "Invalid year";
        }

        cout << endl;
        
        cout << endl;
        cout << "Would you like to try another one? (Type 'N' to exit): ";
        cin >> choice;
        cout << endl;
        if (choice == 'N' || choice == 'n') {
            cout << "Thanks for playing!" << endl;
            break;
        }
    }
    return 0;
}

//--------------------------------------------------------------
// Output:
// Welcome to Birthday Date Meaning Generator!

//Please enter the month of your birthday: 1
//Please enter the day of your birthday: 1
//Please enter the year of your birthday (2000-2023): 2003
//The month of January means Janus

//The 1 of January means Self-Started

//The year of 2003 means that you are millennial

//Would you like to try another one? (Type 'N' to exit): N

//Thanks for playing!
//Program ended with exit code: 0
//--------------------------------------------------------------
