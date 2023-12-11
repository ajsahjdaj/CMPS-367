/*--------------------------------------------------------------------------------------------------------------------------
Name Course Project No. Due date
Sakara Anderson CMPS 367
October 27, 2023
Purpose. 
a. Create a program that will ask the user to enter their name, age, gender (male/female), height by feet, height by inches and weight in pounds.
--------------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <string>

using namespace std;

// Define a struct to store user information
struct UserInfo {
    string name;
    int age;
    string gender;
    int heightFeet;
    int heightInches;
    double weightInPounds;
    double bmi;
    string bmiCategory;
};

int main() {
    // Declare an object of the UserInfo struct
    UserInfo user;

    // Ask the user to enter their information
    cout << "Please enter your name: ";
    getline(cin, user.name);

    cout << "Please enter your age: ";
    cin >> user.age;

    cout << "Please enter your Gender (male/female): ";
    cin.ignore(); // Ignore the newline character left in the buffer
    getline(cin, user.gender);

    cout << "Please enter your height in feet: ";
    cin >> user.heightFeet;

    cout << "Please enter your height in inches: ";
    cin >> user.heightInches;

    cout << "Please enter your weight in pounds: ";
    cin >> user.weightInPounds;

    // Calculate BMI
    int heightInInches = (user.heightFeet * 12) + user.heightInches;
    user.bmi = (703 * user.weightInPounds) / (heightInInches * heightInInches);

    // Determine BMI category
    if (user.bmi < 16) {
        user.bmiCategory = "Severe Thinness";
    } else if (user.bmi < 17) {
        user.bmiCategory = "Moderate Thinness";
    } else if (user.bmi < 18.5) {
        user.bmiCategory = "Mild Thinness";
    } else if (user.bmi < 25) {
        user.bmiCategory = "Normal";
    } else if (user.bmi < 30) {
        user.bmiCategory = "Overweight";
    } else if (user.bmi < 35) {
        user.bmiCategory = "Obese Class I";
    } else if (user.bmi < 40) {
        user.bmiCategory = "Obese Class II";
    } else {
        user.bmiCategory = "Obese Class III";
    }

    // Output user information and BMI category
    cout << "\nHi " << user.name << "," << endl;
    cout << endl;
    cout << "You are a " << user.gender << ". You are " << user.age << " years old. You are currently "
         << user.heightFeet << "'" << user.heightInches << " and you currently weigh " << user.weightInPounds
         << "\n  pounds. Your BMI is " << user.bmi << ", which is " << user.bmiCategory << "." << endl;
    cout << "\nThank you for using the BMI Calculator!" << endl;

    return 0;
}//--------------------------------------------------------------
// Output:
//Please enter your name: Alex
//Please enter your age: 19
//Please enter your Gender (male/female): female
//Please enter your height in feet: 5
//Please enter your height in inches: 4
//Please enter your weight in pounds: 140

//Hi Alex,

//You are a female. You are 19 years old. You are currently 5'4 and you currently weigh 140 pounds. Your BMI is 24.0283, which is Normal.

//Thank you for using the BMI Calculator!
//Program ended with exit code: 0
//--------------------------------------------------------------

