---------------------------------------------------------------------------------------------------------------------------------------------------------------
Midterm

For this midterm, I:
a. Created a C++ console app, where the user will input information to choose five different ways to select their academic course class.
c. The way the program should run is by asking the user to enter the choose one of the five following options (1,2,3,4,5). 

I will write a program for ULV Registration System, which will
be utilizing Inheritance to model different types of courses and their registration
requirement. The program should start execution by welcoming the user to ULV
system and asking them to select the following options:
• Add a Class
• Edit a Class
• Register a Class
• Drop a Class
• Override a Class

This is the structure of the code:
    1. Define a base class named Course with the following attributes:
• courseCode (string): the unique code for the course.
• courseTitle (string): the title of the course.
• maxCapacity (integer): the maximum number of students that can
register for the course.
• currentEnrollment (integer): the current number of students
enrolled in the course.
    2. Create two derived class named RequiredCourse and ElectiveCourse that
inherit from the Course class.
• RequiredCourse should have an additional attribute:
• prerequisite (string): a description of the prerequisite required
for enrollment.
• ElectiveCourse should have an additional attribute:
• minimumLevel (integer): the minimum academic level
required for enrollment.
    3. Implement a method in each subclass called checkEligibility() that checks
whether a student is eligible to register for the course based on the
subclass-specific attributes.
    4. In the main() function, use a loop to continuously display the menu and
perform actions based on the user's choice.
• For each option:
        • (1) Add a Class: Prompt the user to enter course details and
add an instance of the corresponding subclass to a collection.
CMPS 301: Programming Concepts Fall 2023
        • (2) Edit a Class: Prompt the user to enter the course code to
edit and provide options to modify specific attributes.
        • (3) Register a Class: Display the list of available classes that will
show the name of the course, capacity, remaining capacity.
Then, prompt the user to enter the course code and student
details, then check eligibility and enroll the student if eligible.
        • (4) Drop a Class: Prompt the user to enter the course code and
student details, then drop the student from the course.
        • (5) Override a Class: Prompt the user to enter override code or
prerequisite code to override the requirement so tha the
student can take the course. You can use it as well to enter
semester units that they have taken to update their
enrollment info.

Example: 

    //Output
    //***************************Welcome to ULV**************************
    //Choose one of the following options:
    //(1) Add a Class
    //(2) Edit a Class
    //(3) Register a Class
    //(4) Drop a Class
    //(5) Override a Class

    //Enter the option: 1

    //Enter CRN Number 1415
    //Enter course dept CMPS
    //Enter course number 301
    //Enter course name Programming Concepts
    //Enter meeting days MW
    //Enter meeting time 3:30-5:05PM
    //Enter location Founders Hall
    //Enter capacity 12
    //Enter professor name Juan Rodriguez

    // You have successfully updated class information! Press any key to continue: 

    //CONTINUE(y/n)? y
    //Choose one of the following options:
    //(1) Add a Class
    //(2) Edit a Class
    //(3) Register a Class
    //(4) Drop a Class
    //(5) Override a Class

    //Enter the option: 2
    //Enter CRN number 1415
    //CRN Number: 1415 – Does this looks good(y/n)? y
    //Course Dept: CS - Does this look good(y/n)? y
    //Course Number: 367 – Does this look good(y/n)? y
    //Course Name: Object Oriented Language C++ - Does this looks good(y/n)? y
    //Meeting Days: TR – Does this looks good(y/n)? y
    //Meeting Time: 3:30 – 5:05PM – Does this looks good(y/n)? y
    //Location: FH-207 – Does this looks good(y/n)? y
    //Capacity: 24 – Does this looks good(y/n)? y
    //Professor name: Juan Rodriguez – Does this looks good(y/n)?y

    //You didn’t make any changes to the class information! Press any key to continue:

    //CONTINUE(y/n)?y
    //Choose one of the following options:

    //(1) Add a Class
    //(2) Edit a Class
    //(3) Register a Class
    //(4) Drop a Class
    //(5) Overide a Class

    //Enter the option: 3
    //---------------List of Classes to Register---------------
    //CRN| Dept | Num | Name | Days | Time | Loc | Cap | Prof
    //---------------------------------------------------------
    //1415 CMPS 301 Programming Concepts. MW 3:30-5:05PM FH-207 Juan Rodriguez 24 23
    //1414 CMPS 367 Object Oriented C++ TR. 3:30-5:05PM FH-207 Juan Rodriguez 24 23
    //Type the CRN number to add 1414

    //Your classes has successfully been added! Press any key to continue:

    //CONTINUE(y/n)?y
    //Choose one of the following options:

    //(1) Add a Class
    //(2) Edit a Class
    //(3) Register a Class
    //(4) Drop a Class
    //(5) Overide a Class

    //Enter the option: 4
    //---------------List of Classes to Register---------------
    //CRN| Dept | Num | Name | Days | Time | Loc | Cap | Prof
    //---------------------------------------------------------
    //1415 CMPS 301 Programming Concepts. MW 3:30-5:05PM FH-207 Juan Rodriguez 24 23
    //1414 CMPS 367 Object Oriented C++ TR. 3:30-5:05PM FH-207 Juan Rodriguez 24 23
    //Enter the CRN Number to drop 1415

    //Your classes have successfully been dropped! Press any key to continue:

    //CONTINUE(y/n)?y
    //Choose one of the following options:
    //(1) Add a Class
    //(2) Edit a Class
    //(3) Register a Class
    //(4) Drop a Class
    //(5) Overide a Class

    //Enter the option: 5
    //Enter code to override 123
    //Enter semester units 49

    //Info has been saved! Press any key to continue:

    //CONTINUE(y/n)?n

-----------------------------------------------------------------------------------------------------------------------------------


