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

int main() {
    // Declare variables to store user input
    string name, gender;
    int age, heightFeet, heightInches;
    double weightInPounds;

    // Ask the user to enter their information
    cout << "Please enter your name: ";
    getline(cin, name);

    cout << "Please enter your age: ";
    cin >> age;

    cout << "Please enter your Gender (male/female): ";
    cin.ignore(); // Ignore the newline character left in the buffer
    getline(cin, gender);

    cout << "Please enter your height in feet: ";
    cin >> heightFeet;

    cout << "Please enter your height in inches: ";
    cin >> heightInches;

    cout << "Please enter your weight in pounds: ";
    cin >> weightInPounds;

    // Calculate BMI
    int heightInInches = (heightFeet * 12) + heightInches;
    double bmi = (703 * weightInPounds) / (heightInInches * heightInInches);

    // Determine BMI category
    string bmiCategory;
    if (bmi < 16) {
        bmiCategory = "Severe Thinness";
    } else if (bmi < 17) {
        bmiCategory = "Moderate Thinness";
    } else if (bmi < 18.5) {
        bmiCategory = "Mild Thinness";
    } else if (bmi < 25) {
        bmiCategory = "Normal";
    } else if (bmi < 30) {
        bmiCategory = "Overweight";
    } else if (bmi < 35) {
        bmiCategory = "Obese Class I";
    } else if (bmi < 40) {
        bmiCategory = "Obese Class II";
    } else {
        bmiCategory = "Obese Class III";
    }

    // Output user information and BMI category
    cout << "\nHi " << name << "," << endl;
    cout << endl;
    cout << "You are a " << gender << ". You are " << age << " years old. You are currently " << heightFeet << "'" << heightInches << " and you currently weigh " << weightInPounds << " pounds. Your BMI is " << bmi << ", which is " << bmiCategory << "." << endl;

    cout << "\nThank you for using the BMI Calculator!" << endl;

    return 0;
}
//--------------------------------------------------------------
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

