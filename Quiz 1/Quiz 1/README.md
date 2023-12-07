---------------------------------------------------------------------------------------------------------------------------------------------------------------
Quiz

For this Quiz, I:
a. Created a C++ console app, where the user will calculate the monthly payment required to pay off a
credit card balance with interest.

I will use a struct to store credit card information and create an object to
access it. 

The program should perform the following steps:
    1. Ask the user to enter the following information:
        a. Name
        b. Credit Card Balance
        c. Annual Interest Rate (in percentage)
        d. Desired Number of months to pay off balance    
    2. Store the following responses in a struct variables.
    3. Use the following formula to calculate the monthly payment on a fixed-rate
            loan:
            Monthly Payment = (Balance * (Interest Rate / 12) * (1 + (Interest Rate /
            12))^Number of Months) / ((1 + (Interest Rate / 12))^Number of Months -
            1)
            4. Output the user's name, current credit card balance, annual interest rate,
            the number of months to pay off the balance, and the monthly payment
            required.
            
Example: 
    Output
    
    Please enter your name: Sakara
    Please enter the current credit card balance: 1000
    Please enter the annual interest rate (in percentage): 15
    Please enter the desired number of months to pay off the balance: 12

    Hi Sakara,

    With a current credit card balance of 1000.000, an annual interest rate of 15.000%, and a goal to pay off the balance in 12.000 months, your required monthly payment is $ 0

    Thank you for using the Credit Card Payment Calculator!
-----------------------------------------------------------------------------------------------------------------------------------


