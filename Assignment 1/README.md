---------------------------------------------------------------------------------------------------------------------------------------------------------------
Project 1: Calculator

For this project, I:
a. created a C++ console app, where the user will input a problem that they would like to solve. 
b. The calculator will be able to support order of operation problems as well as regular arithmetic problems. 
c. The way the program should run is by asking the user to enter the problem that they would like to solve. 

You should utilize functions for every step that are outlined above and for the sub-bullet points, these are a function call that you should invoke inside Parenthesis function to do the search, but keep in mind that you should also create a variable that will keep track of your search.

When the operator is found, it will return the index number regarding where the operator is located at. Go ahead and save that index number to 2 variables, which one variable will be to determine where it starts, and another variable will be to determine where it ends.

If you are doing a search in a parenthesis, keep track of where it starts and where it ends and then from there, paste the number that needs to be solved on a new string or you can create a substring and paste it there and solve the problem. Keep in mind that it needs to be one operation at a time so have 2 to 3 substrings which will be reserved for the problem that you are currently solving, the string before the procedure that you took to solve and the string after the procedure that you took to solve. Once you solve the problem, you can concatenate the string with the answer and then perform the search again to find if there are any remaining operators. If you finish solving all the problems in the parenthesis of if you have taken an exponent, you can remove them from the problem.

After concatenating the strings back together with the problem, you will need to perform the search again to find the remaining operators. Keep in mind that you should have a bool variable that will determine if it is done searching for the current operators. By default, it should be false, but if the whole search for an operator is finished, that should be changed to true and then move on to another operator search and do the same for the remainder of the operator.

EX: 

Enter a problem to solve:(3*5^2/15)–(5–2^2)

Here are the steps:
(3*5^2/15)–(5–2^2) 
(3*25/15)–(5–2^2) 
(75/15) – (5 – 2^2) 5–(5–2^2)
5–(5–4) 
5–1
4

The answer to this problem is 4.

Would you like to solve another problem? (Y/N) __________ If Y is chosen, restart the whole state of the program.

If N is chosen, output the following and then exit program:
Thank you for using this calculator!
-----------------------------------------------------------------------------------------------------------------------------------
Project 2: Birthday Date Meaning Generator

For this problem, I: 

a. Created a C++ console app, where it will ask the user for birthday date by month, day and year (2000-2023). 

EX:
Welcome to Birthday Date Meaning Generator! 

Please enter the month of your birthday: ____ 

Please enter the day of your birthday: ______ 

Please enter the year of your birthday: _______ 

The month of January means Janus

The 1st of January means Self-Started

The year of 2000 means that you are millennial Would you like to try another one? ______

(If N is typed) Thanks for playing!
---------------------------------------------------------------------------------------------------------------------------------------------------------------
Project 3: BMI Calculator

Create a program that:

a. asks the user to enter their name, age, gender (male/female), height by feet, height by inches and weight in pounds. 

EX:

Please enter your name: ____________________
Please enter your age: ________________________
lease enter your Gender: _____________________
Please enter your height in feet: _______________
Please enter your height in inches: __________
Please enter your weight in pounds: _________

You are a (male/female). You are (age) years old. You are currently (height in feet)’(height in inches) and you currently weight (weight) pounds. Your BMI is (BMI), which is (meaning of BMI).

Thank you for using the BMI Calculator!
-----------------------------------------------------------------------------------------------------------------------------------


