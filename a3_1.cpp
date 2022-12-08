// Kira Cornejo
// CSCI 1010 002
// Assignemnt 3
// Write a program that ask the user to enter the amount of taxable income, then displays the tax due
#include <iostream>
using namespace std;

int main()
{
    //defining variables used throughout program
    double income, tax, taxDue;

    cout << "Enter the income: " << endl;
    cin >> income;

    //determining tax due based on income via user input
    if(income < 750.00)
    {
        //calculating tax due based off income
        taxDue = income * 0.1;
        cout << "The tax due is: $" << taxDue << endl;
    }
    
    else if(income >= 750.00 && income < 2250.00)
    {
        taxDue = 7.50 + (income * .02);
        cout << "The tax due is: $" << taxDue << endl;
    }

    else if(income >= 2500.00 && income < 3750.00)
    {
        taxDue = 37.50 + (income * .03);
        cout << "The tax due is: $" << taxDue << endl;
    }

    else if(income >= 3750.00 && income < 5250.00)
    {
        taxDue = 82.50 + (income * .04);
        cout << "The tax due is: $" << taxDue << endl;
    }

    else if(income > 5250.00)
    {
        taxDue = 142.50 + (income * .05);
        cout << "The tax due is: $" << taxDue << endl;
    }

    //If user does not enter a valid value/number
    else
    {
        cout << "Error: Please try again." << endl;
    }
    return 0;
}