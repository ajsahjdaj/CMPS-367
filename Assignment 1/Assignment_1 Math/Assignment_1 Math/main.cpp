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

// Function to understand math symbols
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Function to calculate
float calculate(float num1, float num2, char op) {
    switch (op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            return num1 / num2;
        case '^':
            return pow(num1, num2);
        default:
            return 0.0;
    }
}

// Function to solve parentheses
float solveOperation(string& expression, int& index) {
    float result = 0.0;
    char op = ' ';
    bool foundOperator = false;

    while (index < expression.length()) {
        char currentChar = expression[index];

        if (currentChar == '(') {
            // Solve the inner parentheses
            index++;
            float innerResult = solveOperation(expression, index);
            if (foundOperator)
                result = calculate(result, innerResult, op);
            else
                result = innerResult;
            foundOperator = false;
        }
        else if (currentChar == ')') {
            index++;
            break;
        }
        else if (isOperator(currentChar)) {
            // Found an operator
            op = currentChar;
            foundOperator = true;
            index++;
        }
        else if (isdigit(currentChar) || currentChar == '.') {
            // Found a digit or decimal point
            string numStr;
            while (index < expression.length() && (isdigit(expression[index]) || expression[index] == '.')) {
                numStr += expression[index];
                index++;
            }
            float num = stof(numStr);
            if (foundOperator)
                result = calculate(result, num, op);
            else
                result = num;
            foundOperator = false;
        }
        else {
            // Ignore other characters
            index++;
        }
    }
    return result;
}

int main()
   {
    char choice = 'Y';
    
    while (choice == 'Y' || choice == 'y') {
        cout << "Enter a problem to solve: ";
        string problem;
        getline(cin, problem);

        int index = 0;
        float result = solveOperation(problem, index);
        
        //display the output
        cout << endl;
        cout << "Here are the steps:\n";
        cout << endl;
        cout << "The answer to this problem is: " << result << endl;
        cout << endl;
        cout << "Would you like to solve another problem? (Y/N) "; cin >> choice;
        cin.ignore();
    }
    cout << endl;        cout << endl;
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
