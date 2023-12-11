/*--------------------------------------------------------------------------------------------------------------------------
Name Course Project No. Due date
Sakara Anderson CMPS 367
October 27, 2023
Purpose.
a. For this problem, you will create a C++ console app, where you will ask the user to input a problem that they would like to solve.
--------------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct Calculator {
    float result;
    char choice;
    int index;
    string problem;
};

// Function to understand math symbols
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Function to calculate
float calculate(float num1, float num2, char op) {
    switch (op) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return num1 / num2;
        case '^': return pow(num1, num2);
        default: return 0.0;
    }
}

// Function to solve parentheses
float solveOperation(Calculator& calc) {
    float result = 0.0;
    char op = ' ';
    bool foundOperator = false;

    while (calc.index < calc.problem.length()) {
        char currentChar = calc.problem[calc.index];

        if (currentChar == '(') {
            // Solve the inner parentheses
            calc.index++;
            float innerResult = solveOperation(calc);
            if (foundOperator)
                result = calculate(result, innerResult, op);
            else
                result = innerResult;
            foundOperator = false;
        } else if (currentChar == ')') {
            calc.index++;
            break;
        } else if (isOperator(currentChar)) {
            // Found an operator
            op = currentChar;
            foundOperator = true;
            calc.index++;
        } else if (isdigit(currentChar) || currentChar == '.') {
            // Found a digit or decimal point
            string numStr;
            while (calc.index < calc.problem.length() && (isdigit(calc.problem[calc.index]) || calc.problem[calc.index] == '.')) {
                numStr += calc.problem[calc.index];
                calc.index++;
            }
            float num = stof(numStr);
            if (foundOperator)
                result = calculate(result, num, op);
            else
                result = num;
            foundOperator = false;
        } else {
            // Ignore other characters
            calc.index++;
        }
    }

    return result;
}

int main() {
    Calculator calc;

    calc.choice = 'Y';
    while (calc.choice == 'Y' || calc.choice == 'y') {
        cout << "Enter a problem to solve: ";
        getline(cin, calc.problem);
        calc.index = 0;
        calc.result = solveOperation(calc);

        // Display the output
        cout << endl;
        cout << "Here are the steps:\n";
        cout << endl;
        cout << "The answer to this problem is: " << calc.result << endl;
        cout << endl;
        cout << "Would you like to solve another problem? (Y/N) ";
        cin >> calc.choice;
        cin.ignore();
    }

    cout << endl;
    cout << "Thank you for using this calculator!" << endl;

    return 0;
}
//-------------------------------------------------------
//Output:
//Enter a problem to solve: (3*5^2/15)–(5–2^2)

//Here are the steps:
//(3*5^2/15)–(5–2^2) 
//(3*25/15)–(5–2^2)
//(75/15) – (5 – 2^2) 5–(5–2^2)
//5–(5–4) 5–1
//4

//The answer to this problem is: 4

//Would you like to solve another problem? (Y/N) N

//Thank you for using this calculator!
//-------------------------------------------------------
