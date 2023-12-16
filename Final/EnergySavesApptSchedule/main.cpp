/*--------------------------------------------------------------------------------------------------------------------------
Name:                       Sakara Anderson+Ashley Fox
Course:                     CMPS 367
Project No. Due date:       December 15, 2023

Purpose. This program calls functions to:

//a. Create an appointment scheduling platform system

//b. Create the 3 different services offered for appointment booking
        a.     HVAC
        b.     Plumbing
        c.     Electrical

//c. Create available dates & time slots for appointments for each service
        a.     9am to 5pm
        b.     Monday to Saturday

//d. Create Information page for customer
        a.     Customer Full Name
        b.     Customer Address
        c.     Customer email address
        d.     Customer phone number
        e.     Brief description of the service needed
--------------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <string>

using namespace std;

// Structure to hold customer information
struct CustomerInfo {
    string fullName;
    string address;
    string emailAddress;
    string phoneNumber;
    string serviceDescription;
};

//function prototypes
void copyData(string fname, int time[], string AMPM[], string date[], int n);
void displayScore(int time[], string AMPM[], string date[], int n);
void computeDisplay(int scores[], float&average, int&max, int&min, int n);
void selectChoice(char&choice);
void displayOptions(char&ans);
void computeAns(char&ans);
void displayApp();
void displayOptions(char&ans);
void computeAns(char&ans);
void bookAppointment(string services);

int main()
{

//declare variables
  int time[6];
  string AMPM[6];
  string date[6];
  char ans;
  string services[3] = {"HVAC", "Plumbing", "Electrical"};
  char choice;

  //do while function to loop the appt system
  do {
      //to display the App
      displayApp();

      //to display options/choices on the app
      displayOptions(ans);

      //to compute ans for options/choices
      computeAns(ans);
      if (ans == 'a' || ans == 'A')
      {
          // Displaying available services for appointment booking
            cout << "Energy Savers USA Services Offered For Booking:\n";
            cout << "d. HVAC\n";
            cout << "e. Plumbing\n";
            cout << "f. Electrical\n\n";

            // Selecting a service for appointment booking
            cout << "Enter the letter corresponding to the service you would like to book an appointment for: ";
            cin >> choice;

            choice = tolower(choice);

            switch (choice) {
                case 'd':
                    bookAppointment(services[0]);
                    break;
                case 'e':
                    bookAppointment(services[1]);
                    break;
                case 'f':
                    bookAppointment(services[2]);
                    break;
                default:
                    cout << "Invalid choice. Please select a valid service letter (d, e, f).\n";
                    return 1;
            }

          //Create function to copy 7 scores and grades from the file into array classScores
          copyData("apptTime.txt",time,AMPM,date,6);

          //function to display all names
          displayScore(time,AMPM,date,6);

          selectChoice(ans);

          // Collecting customer information
             CustomerInfo customer;

             cin.ignore(); // Clearing the input buffer
             cout << "\nPlease provide the following information:\n";
             cout << "Customer Full Name: ";
             getline(cin, customer.fullName);

             cout << "Customer Address: ";
             getline(cin, customer.address);

             cout << "Customer Email Address: ";
             getline(cin, customer.emailAddress);

             cout << "Customer Phone Number: ";
             getline(cin, customer.phoneNumber);

             cout << "Brief Description of Service Needed: ";
             getline(cin, customer.serviceDescription);

             // Displaying the collected customer information
             cout << "\nCustomer Information:\n";
             cout << "Full Name: " << customer.fullName << endl;
             cout << "Address: " << customer.address << endl;
             cout << "Email Address: " << customer.emailAddress << endl;
             cout << "Phone Number: " << customer.phoneNumber << endl;
             cout << "Service Description: " << customer.serviceDescription << endl;
      }

      //question to end program
      cout << "Continue(y/n)? "; cin >> ans;
  } while (ans == 'y' || ans == 'Y');

//terminate program
return 0; 
}
//------------------------------
// name: displayAPP
// input: None
// output: none
//------------------------------
void displayApp()
{
  //display the appt system
  cout << setfill ('-') << endl;
  cout << left << setw(20) << ('-') << " Energy Saves USA " << right << setw(20) << ('-') << endl;
  cout << endl;
  cout << endl;
}
//------------------------------
// name: displayOptions
// input: char ans
// output: none
//------------------------------
void displayOptions(char&ans)
{
    //display options to chose from
    cout << "Please select from the following:\n";
    cout << endl;
    cout << "Request a service (a)\n";
    cout << "Information page (b)\n";
    cout << "Exit (c)\n";
    cout << endl;

    //allows you to chose an option
    cout << "___ "; cin >> ans;
    cout << endl;
}
//------------------------------
// name: computeAns
// input: char ans
// output: ans will be computed and distributed to different choices (a,b,c).
//------------------------------
void computeAns(char&ans)
{
  //if function to lead user to different choices
  if (ans == 'a' || ans == 'A')
  {
      //here will be the appointment booking page (ashley)
      //i will add my date and time slots after you add the services offered (sakara)
      cout<<"There are three options in total.\n";
  }
  else if (ans == 'b' || ans == 'B')
  {
      //Information page (Ashley)
    cout << "What we do:\n";
    cout << endl;
    cout << "Energy Savers USA is currently using the traditional appointment calendars to book and schedule their services. When customers want to schedule a appointment they have 3 options in doing so: in-person, over the phone, or by email. This method like any other does have its pros and cons. Some of the cons with using a traditional appointment calendar to schedule appointments is accessibility. Forcing customers to schedule appointments in person or over the phone is inconvenient for many customers. Another con is that traditional calendars offer no way of generating reports and customer analytics, unless doing it manually.\n";
    cout << endl;
    cout << "Solution:\n";
    cout << endl;
    cout << "This project aims to create an appointment scheduling system that will help the Energy Savers USA employees better handle all upcoming appointments. The system allows Energy Savers USA to manage their booking slots online. Customers can access the online system to book an appointment on one of the available time slots for the service they require (HVAC, Plumbing, Electrical), which will generate their information into the system and reserve the appointment time. Customers are also able to view and edit their appointments.\n";
    cout << endl;
    cout << endl;
  }
  else
  {
      //This leads the user to exit the appt system
      cout << "Sorry to see you go!\n";
  }
}
// Function to book appointment for the selected service
void bookAppointment(string service) {
    cout << "Appointment booked for " << service << " service. Thank you!\n";
}
//------------------------------
// name:copyData
// input: two integers scores[] and n. String fname and grade[]. // output: none
//------------------------------
void copyData(string fname, int time[], string AMPM[], string date[], int n)
{
fstream f; //to open the file
f.open(fname, ios::in); for(int i=0;i<n;++i)
{
f >> time[i] >> AMPM[i] >> date[i];
}
f.close(); }
//------------------------------
// name:displayScore
// input: three integers scores[], grade[], and n to be displayed // output: none
//------------------------------
void displayScore(int time[], string AMPM[], string date[], int n)
{
  cout << endl;
  cout << endl;
  cout << "Here are the dates and times avaiable:\n";
  cout << endl;
for(int i=0;i<n;++i)
{
cout << time[i] << "\t\t" << AMPM[i] << "\t\t" << date[i] << "\n";
} }
//------------------------------
// name:computeDisplay
// input: three integers scores[], max, and min. float average. All of these are to be displayed // output: none
//------------------------------
void selectChoice(char&ans)
{
  cout << endl;
  cout << "Please enter a time that works for you (ex. 9 Sunday): ___"; cin >> ans;
  cout << endl;
  cout << ans << ":00 Collected, Thank you!\n";
}
/*-------------------- Energy Saves USA --------------------

 Please select from the following:
 Request a service (a)
 Information page (b)
 Exit (c)
 ___

 (if a is selected)
 Energy Savers USA Services Offered For Booking:
 d. HVAC
 e. Plumbing
 f. Electrical

 Enter the letter corresponding to the service you would like to book an appointment for:
 (if d is selected)

 Appointment booked for HVAC service. Thank you!

 Here are the dates and times avaiable:

 10      AM      Sunday
 9       AM      Monday
 9       AM      Tuesday
 8       AM      Thursday
 7       AM      Friday
 8       AM      Saturday

 Please enter a time that works for you (ex. 9 Sunday): ___

 (time) Collected, Thank you!

 Please provide the following information:
 Customer Full Name: as
 Customer Address: as
 Customer Email Address: as
 Customer Phone Number: as
 Brief Description of Service Needed: as

 Customer Information:
 Full Name: as
 Address: as
 Email Address: as
 Phone Number: as
 Service Description: as
 Continue(y/n)?

 (if e is selected)
 Appointment booked for Plumbing service. Thank you!

 Here are the dates and times avaiable:

 10      AM      Sunday
 9       AM      Monday
 9       AM      Tuesday
 8       AM      Thursday
 7       AM      Friday
 8       AM      Saturday

 Please enter a time that works for you (ex. 9 Sunday): ___

 (time) Collected, Thank you!

 Please provide the following information:
 Customer Full Name: as
 Customer Address: as
 Customer Email Address: as
 Customer Phone Number: as
 Brief Description of Service Needed: as

 Customer Information:
 Full Name: as
 Address: as
 Email Address: as
 Phone Number: as
 Service Description: as
 Continue(y/n)?

 (if f is selected)
 Appointment booked for Electrical service. Thank you!

 Here are the dates and times avaiable:

 10      AM      Sunday
 9       AM      Monday
 9       AM      Tuesday
 8       AM      Thursday
 7       AM      Friday
 8       AM      Saturday

 Please enter a time that works for you (ex. 9 Sunday): ___

  (time) Collected, Thank you!

 Please provide the following information:
 Customer Full Name: as
 Customer Address: as
 Customer Email Address: as
 Customer Phone Number: as
 Brief Description of Service Needed: as

 Customer Information:
 Full Name: as
 Address: as
 Email Address: as
 Phone Number: as
 Service Description: as
 Continue(y/n)?


 (if b is selected)
 What we do:

 Energy Savers USA is currently using the traditional appointment calendars to book and schedule their services. When customers want to schedule a appointment they have 3 options in doing so: in-person, over the phone, or by email. This method like any other does have its pros and cons. Some of the cons with using a traditional appointment calendar to schedule appointments is accessibility. Forcing customers to schedule appointments in person or over the phone is inconvenient for many customers. Another con is that traditional calendars offer no way of generating reports and customer analytics, unless doing it manually.

 Solution:

 This project aims to create an appointment scheduling system that will help the Energy Savers USA employees better handle all upcoming appointments. The system allows Energy Savers USA to manage their booking slots online. Customers can access the online system to book an appointment on one of the available time slots for the service they require (HVAC, Plumbing, Electrical), which will generate their information into the system and reserve the appointment time. Customers are also able to view and edit their appointments.

 Continue(y/n)?

 (if c is selected)
 Sorry to see you go!
 Continue(y/n)?

 (if y/Y is selected for "Continue(y/n)?" the program loops back to the start. If n/N is selected, it ends the program.)
 */

