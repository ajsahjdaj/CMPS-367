/*--------------------------------------------------------------------------------------------------------------------------
Name:                       Sakara Anderson
Course:                     CMPS 367
Project No. Due date:       December 15, 2023

Purpose. This program calls functions to:

//a. ask the user to enter the course dept, course num and
 course name.
 
//b. ask the user to enter the name of the
 assignment
 
//c. ask the user to enter points possible of the assignment
 
//d. enter the number of students that will be scored
 
//e. create a dynamic array to inject the number of elements that will be used to
 record the scores

//f. entered the score for each student, which the loop should go on for the
 specified number of times as you have mentioned in the previous question
 
//g. create a function that will be used to sort the scores in numerical
 order in ascending format by using Recursive Bubble Sort
--------------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

//Function prototypes
void recursiveBubbleSort(int arr[], int n);


int main() {
    cout << "Welcome to Grade Calculator!" << endl;

    //declare variables
    string courseDept, courseNum, courseName;
    int numStudents, pointsPossible;

    //allow user to put in info
    cout << "Enter the course dept: ";
    cin >> courseDept;

    cout << "Enter the course number: ";
    cin >> courseNum;

    cout << "Enter the course name: ";
    cin.ignore();
    getline(cin, courseName);
    
    cout << endl;

    cout << "Enter the number of students that will be scored: ";
    cin >> numStudents;

    cout << "Enter points possible: ";
    cin >> pointsPossible;
    
    cout << endl;

    //Function to store student scores
    int *scores = new int[numStudents];

    //Function to get scores for each student
    cout << "Enter the score: " << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter score for student " << i + 1 << ": ";
        cin >> scores[i];
    }

    //Function to sort the scores
    recursiveBubbleSort(scores, numStudents);

    //Calculates total score
    int totalScore = 0;
    for (int i = 0; i < numStudents; i++) {
        totalScore += scores[i];
    }

    //Calculates average score
    double average = static_cast<double>(totalScore) / (numStudents * pointsPossible) * 100;

    //Finds lowest and highest scores
    int lowestScore = scores[0];
    int highestScore = scores[numStudents - 1];

    //Displays calculated info
    cout << "\nCourse: " << courseDept << " " << courseNum << ": " << courseName << endl;
    cout << "Scores: ";
    for (int i = 0; i < numStudents; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;
    cout << "\nAverage: " << average << "%" << endl;
    cout << "Lowest Score: " << lowestScore << endl;
    cout << "Highest Score: " << highestScore << endl;

    delete[] scores;

    cout << "\nThank you for using the grade calculator!" << endl;
    
    //terminate program
    return 0;
}
//------------------------------
// name:computeDisplay
// input: two intergers arr[] and n
// output: none
//------------------------------
void recursiveBubbleSort(int arr[], int n) {
    if (n == 1)
        return;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    // Recursive call for remaining elements
    recursiveBubbleSort(arr, n - 1);
}
 /*----------------------------
  Output
  Welcome to Grade Calculator!
  Enter the course dept: CMPS
  Enter the course number: 1415
  Enter the course name: Object Oriented Language C++
  
  Enter the number of students that will be scored: 10
  Enter points possible: 100
  
  Enter the score:
  Enter score for student 1: 10
  Enter score for student 2: 20
  Enter score for student 3: 30
  Enter score for student 4: 40
  Enter score for student 5: 50
  Enter score for student 6: 60
  Enter score for student 7: 70
  Enter score for student 8: 80
  Enter score for student 9: 90
  Enter score for student 10: 100
  
  Course: CMPS 1415: Object Oriented Language C++
  Scores: 10 20 30 40 50 60 70 80 90 100
  
  Average: 55%
  Lowest Score: 10
  Highest Score: 100
  
  Thank you for using the grade calculator!
 ------------------------------*/
