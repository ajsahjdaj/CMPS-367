Purpose. This program calls functions to:

1. Ask the user to enter the course dept, course num and
course name. From there, you will ask the user to enter the name of the
assignment. After asking the user to enter the name of the assignment, then you
will ask the user to enter points possible of the assignment. From there, you will
go ahead and enter the number of students that will be scored. Then, you will
create a dynamic array to inject the number of elements that will be used to
record the scores by using this code: int *arr = new int(n); Then, using a loop, you
will entered the score for each student, which the loop should go on for the
specified number of times as you have mentioned in the previous question. From
there, you will create a function that will be used to sort the scores in numerical
order in ascending format by using Recursive Bubble Sort. In that function, you
will make it a recursive function, where the function needs to be called for several
times until all elements of the array are sorted in alphabetical order.

2. From there, you will go ahead and calculate the average score, minimum and
maximum score using the elements of the array. The average score, minimum and
maximum score should each have a function that should contain source code for
each of its functions.

3. Then, you will output the course dept followed by space, then the course num
followed by colon and finally, the course name. From there, you will output all the
scores that was entered in the program earlier but in ascending order. Then, you
will output the average score, minimum score and maximum score of the
assignment.


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
