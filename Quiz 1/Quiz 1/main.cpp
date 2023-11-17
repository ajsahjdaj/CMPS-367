#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#define MONTHS_IN_YEAR 12

using namespace std;

/*Input the username*/
void getUsername(string &username){
cout << "Please enter your name: ";
getline(cin,username);
}
/*Input the credit balance*/
void getBalance(double &balance){
cout << "Please enter the current credit card balance: ";
cin >>balance;
}

/*Input the APR (in percentage)*/
void getAPR(double & APR){
cout << "Please enter the annual interest rate (in percentage): ";
cin >> APR;
}

/*Input the Monthly payments*/
void getMonthlyPayments(double &monthlyPayments){
cout << "Please enter the desired number of months to pay off the balance: ";
cin >> monthlyPayments;
}

/*Calculate the number of months*/
int calculateMonths(double balance,double APR,double monthlyPayments){
double MPR = APR/MONTHS_IN_YEAR;
//-log(1 - (Ai/P))/log(1 + i)
double month = -1*(log(1 - (balance * MPR/100)/monthlyPayments)/log(1+MPR/100));

return ceil(month);
}

int main()
{
/*Declare variables*/
string username;
double balance;
double APR;
double monthlyPayments;
int number_of_months;

/*Get info*/
getUsername(username);
getBalance(balance);
getAPR(APR);
getMonthlyPayments(monthlyPayments);
    
/*Display Info*/
cout << fixed << setprecision(3);
cout << endl;
cout <<"Hi " << username << "," << endl;
cout << endl;
cout <<"With a current credit card balance of "<< balance;
cout <<", an annual interest rate of " << APR;
cout <<"%, and a goal to pay off the balance in " << monthlyPayments;
cout <<" months, your required monthly payment is $ "<<calculateMonths(balance,APR,monthlyPayments)<<endl;
cout << endl;
cout << "Thank you for using the Credit Card Payment Calculator!\n";

return 0;
}

/*Output*/
/*Please enter your name: Sakara
Please enter the current credit card balance: 1000
Please enter the annual interest rate (in percentage): 15
Please enter the desired number of months to pay off the balance: 12

Hi Sakara,

With a current credit card balance of 1000.000, an annual interest rate of 15.000%, and a goal to pay off the balance in 12.000 months, your required monthly payment is $ 0

Thank you for using the Credit Card Payment Calculator!
Program ended with exit code: 0*/
