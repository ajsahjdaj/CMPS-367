#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void print(list<int>* myContainer, int n);
void print(list<int>& mylist, int index);
void optionFive(int&code, int&unit);
void optionFour(int&crn);
void optionThree(int&crn);
void courseProf (char&pname, char&ans5);
void courseCap (int&cap, char&ans5);
void courseLoc (string&cloc, char&ans5);
void courseMeet(int&ctime, char&ans5);
void courseDays (int&cdays, char&ans5);
void courseName (char&cname, char&ans5);
void courseNum (int&cnum, char&ans5);
void courseDept (string&cdept, string&cdept2, char&ans5);
void displayOptiontwo (int&crn, char&ans5, string&cdept, string&cdept2);
void optionTwo(int&crn);
void displayOption1 (int&option, int&crn, int&cnum, int&ctime, int&cap, int&cdays, char&pname, char&cname, string&cdept, string&cdept2, string&cloc);
void optionOne(int&option, int&crn, int&cnum, int&ctime, int&cap, int&cdays, char&pname, char&cname, string&cdept, string&cdept2, string&cloc);

int main()
{
    //display variables
    int option, crn, cnum, ctime, cap, cdays, code, unit;
    list<int> myContainer[1];
    string cloc;
    string cdept = "Programming Concepts.";
    string cdept2 = "Object Oriented C++";
    char ans2, ans5, cname, pname;

    // listing values to the list stored
    // at the index 0
    // 15 <-> 5 <-> 10 <-> 20
    myContainer[0].push_front(1415);
    myContainer[0].push_back(1414);

    //display a welcome sign
    cout << setfill('*');
    cout << right << setw(20) << ('*') << "Welcome to ULV" << left << setw(20) << ('*') << endl;

    //return statement
    do
    {

        //tell user to put in their choice
        cout << "Choose one of the following options:\n";
        cout << endl;
        cout << "(1) Add a Class\n";
        cout << "(2) Edit a Class\n";
        cout << "(3) Register a Class\n";
        cout << "(4) Drop a Class\n";
        cout << "(5) Overide a Class\n";
        cout << endl;
        //allows user to put in their choice
        cout << "Enter the option: "; cin >> option;
        //option 1
        if (option==1)
        {
            optionOne(option, crn, cnum, ctime, cap, cdays, pname, cname, cdept, cdept2, cloc);
            cout << endl;
            //return statement
            displayOption1(option, crn, cnum, ctime, cap, cdays, pname, cname, cdept, cdept2, cloc);
            cout << endl;
            cout << "You have successfully updated class information! Press any key to continue: ";
        }
        //option 2
        else if (option==2)
        {
            if (ans5=='n'||ans5=='N')
            {
              do
                {
                optionTwo(crn);
                //check to make sure
                displayOptiontwo(crn, ans5, cdept, cdept2);
                }while (ans5=='n'||ans5=='N');
                courseDept(cdept, cdept2, ans5);
                courseNum(cnum, ans5);
                courseName(cname, ans5);
                courseDays(cdays, ans5);
                courseMeet(ctime, ans5);
                courseLoc(cloc, ans5);
                courseCap(cap, ans5);
                courseProf(pname, ans5);
              cout << endl;
              cout << "You have successfully updated class information! Press any key to continue:\n";
            }
            else
            {
              do
                {
                optionTwo(crn);
                //check to make sure
                displayOptiontwo(crn, ans5, cdept, cdept2);
                }while (ans5=='n'||ans5=='N');
                courseDept(cdept, cdept2, ans5);
                courseNum(cnum, ans5);
                courseName(cname, ans5);
                courseDays(cdays, ans5);
                courseMeet(ctime, ans5);
                courseLoc(cloc, ans5);
                courseCap(cap, ans5);
                courseProf(pname, ans5);
              cout << endl;
              cout << "You didn’t make any changes to the class information! Press any key to continue:\n";
            }
        }
      else if(option==3)
      {
        optionThree(crn);
        cout << endl;
        cout << "Your classes has successfully been added! Press any key to continue:\n";
      }
      else if(option==4)
      {
        optionFour(crn);
        cout << endl;
        cout << "Your classes have successfully been dropped! Press any key to continue:\n";
      }
      else
      {
        optionFive(code, unit);
        cout << endl;
        cout << "Info has been saved! Press any key to continue:\n";
        
      }
        cout << endl;
        cout << "CONTINUE(y/n)?"; cin >> ans2;

    }while(ans2=='y'||ans2=='Y');
}
//------------------------------
// name: optionOne
// input: option, crn, cnum, ctime, cap, cdays, pname, cname, cdept, and cloc to be inputted
// output: none
//------------------------------
void optionOne(int&option, int&crn, int&cnum, int&ctime, int&cap, int&cdays, char&pname, char&cname, string&cdept, string&cdept2, string&cloc)
{
    cout << "Enter CRN number "; cin >> crn;
    cout << "Enter course dept "; cin >> cdept;
    cout << "Enter course number "; cin >> cnum;
    cout << "Enter course name "; cin >> cname;
    cout << "Enter meeting days "; cin >> cdays;
    cout << "Enter meeting time "; cin >> ctime;
    cout << "Enter location "; cin >> cloc;
    cout << "Enter capacity "; cin >> cap;
    cout << "Enter professor name "; cin >> pname;
}
//------------------------------
// name: displayOption1
// input: option, crn, cnum, ctime, cap, cdays, pname, cname, cdept, and cloc to be displayed
// output: intergers option, crn, cnum, ctime, cap, cdays, pname, cname, cdept, and cloc
//------------------------------
void displayOption1 (int&option, int&crn, int&cnum, int&ctime, int&cap, int&cdays, char&pname, char&cname, string&cdept, string&cdept2, string&cloc)
{
    cout << "CRN: " << crn << endl;
    cout << "Coure dept: " << cdept << endl;
    cout << "Course number: " << cnum << endl;
    cout << "Course name: " << cname << endl;
    cout << "Meeting days: " << cdays << endl;
    cout << "Meeting time: " << ctime << endl;
    cout << "Location: " << cloc << endl;
    cout << "Capacity: " << cap << endl;
    cout << "Professor name: " << pname << endl;
}
//------------------------------
// name: optionTwo
// input: crn to be inputted
// output: none
//------------------------------
void optionTwo(int&crn)
{
  cout << "Enter CRN number "; cin >> crn;
}
//------------------------------
// name: displayOptiontwo
// input: crn, ans5, and cdept to be displayed
// output: none
//------------------------------
void displayOptiontwo (int&crn, char&ans5, string&cdept, string&cdept2)
{
  cout << "CRN Number: " << crn << " – Does this looks good(y/n)? "; cin >> ans5;
}
//------------------------------
// name: courseDept
// input: ans5, and cdept to be displayed
// output: none
//------------------------------
void courseDept (string&cdept, string&cdept2, char&ans5)
{
  cout << "Course Dept: CS - Does this look good(y/n)? "; cin >> ans5;
  if (ans5=='n'||ans5=='N')
  {
    cout << "Enter course dept "; cin >> cdept;
  }
}
//------------------------------
// name: courseNum
// input: ans5, and cnum to be displayed
// output: none
//------------------------------
void courseNum (int&cnum, char&ans5)
{
  cout << "Course Number: 367 – Does this look good(y/n)? "; cin >> ans5;
  if (ans5=='n'||ans5=='N')
  {
    cout << "Enter course number "; cin >> cnum;
  }
}
//------------------------------
// name: courseName
// input: ans5, and cname to be displayed
// output: none
//------------------------------
void courseName (char&cname, char&ans5)
{
  cout << "Course Name: Object Oriented Language C++ - Does this looks good(y/n)? "; cin >> ans5;

  if (ans5=='n'||ans5=='N')
  {
    cout << "Enter course name "; cin >> cname;
  }
}
//------------------------------
// name: courseDays
// input: ans5, and cdays to be displayed
// output: none
//------------------------------
void courseDays (int&cdays, char&ans5)
{
  cout << "Meeting Days: TR – Does this looks good(y/n)? "; cin >> ans5;
    if (ans5=='n'||ans5=='N')
  {
     cout << "Enter meeting days "; cin >> cdays;
  }
}
//------------------------------
// name: courseMeet
// input: ans5, and ctime to be displayed
// output: none
//------------------------------
void courseMeet(int&ctime, char&ans5)
{
  cout << "Meeting Time: 3:30 – 5:05PM – Does this looks good(y/n)? "; cin >> ans5;
  if (ans5=='n'||ans5=='N')
  {
    cout << "Enter meeting time "; cin >> ctime;
  }
}
//------------------------------
// name: courseLoc
// input: ans5, and cloc to be displayed
// output: none
//------------------------------
void courseLoc (string&cloc, char&ans5)
{
  cout << "Location: FH-207 – Does this looks good(y/n)? "; cin >> ans5;
  if (ans5=='n'||ans5=='N')
  {
    cout << "Enter location "; cin >> cloc;
  }
}
//------------------------------
// name: courseCap
// input: ans5, and cap to be displayed
// output: none
//------------------------------
void courseCap (int&cap, char&ans5)
{
  cout << "Capacity: 24 – Does this looks good(y/n)? "; cin >> ans5;
  if (ans5=='n'||ans5=='N')
  {
    cout << "Enter capacity "; cin >> cap;
  }
}
//------------------------------
// name: courseProf 
// input: ans5, and pname to be displayed
// output: none
//------------------------------
void courseProf (char&pname, char&ans5)
{
  cout << "Professor name: Juan Rodriguez – Does this looks good(y/n)?"; cin >> ans5;
  if (ans5=='n'||ans5=='N')
  {
    cout << "Enter professor name "; cin >> pname;
  }
}
//------------------------------
// name: optionThree
// input: crn to be displayed
// output: none
//------------------------------
void optionThree(int&crn)
{
  cout << setfill('-');
  cout << left << setw(15) << ('-') << "List of Classes to Register" << right << setw(15) << ('-') << endl;
  cout << "CRN| Dept | Num | Name | Days | Time | Loc | Cap | Prof" << endl;
  cout << "---------------------------------------------------------\n";
  cout << "1415 CMPS 301 Programming Concepts. MW 3:30-5:05PM FH-207 Juan Rodriguez 24 23\n";
  cout << "1414 CMPS 367 Object Oriented C++ TR. 3:30-5:05PM FH-207 Juan Rodriguez 24 23\n";
  cout << "Type the CRN number to add "; cin >> crn;
}
//------------------------------
// name: optionFour
// input: crn to be displayed
// output: none
//------------------------------
void optionFour(int&crn)
{
  cout << setfill('-');
  cout << left << setw(15) << ('-') << "List of Classes to Register" << right << setw(15) << ('-') << endl;
  cout << "CRN| Dept | Num | Name | Days | Time | Loc | Cap | Prof" << endl;
  cout << "---------------------------------------------------------\n";
  cout << "1415 CMPS 301 Programming Concepts. MW 3:30-5:05PM FH-207 Juan Rodriguez 24 23\n";
  cout << "1414 CMPS 367 Object Oriented C++ TR. 3:30-5:05PM FH-207 Juan Rodriguez 24 23\n";
  cout << "Enter the CRN Number to drop "; cin >> crn;
}
//------------------------------
// name: optionFive
// input: code, and unit to be displayed
// output: none
//------------------------------
void optionFive(int&code, int&unit)
{
  cout << "Enter code to override "; cin >> code;
  cout << "Enter semester units "; cin >> unit;
}
// Function to print list elements
// specified at the index, "index"
void print(list<int>& mylist,
    int index)
{
  cout << "The list elements stored at the index " <<
      index << ": \n";

  // Each element of the list is a pair on
  // its own
  for (auto element : mylist)
  {
    // Each element of the list is a pair
    // on its own
    cout << element << '\n';
  }
  cout << '\n';
}

// Function to iterate over all the array
void print(list<int>* myContainer, int n)
{
  cout << "myContainer elements:\n\n";

  // Iterating over myContainer elements
  // Each element is a list on its own
  for (int i = 0; i < n; i++)
  {
    print(myContainer[i], i);
  }
}
//Output





