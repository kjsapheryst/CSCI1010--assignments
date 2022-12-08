// Kira Cornejo
// CSCI 1010 002
// Assignemnt 3
//Write a program to convert the numeric grades to letter grades based on the following rules
#include <iostream>
using namespace std;

int main()
{
    //defining variable used throughout program
    double grade;

    cout << "Enter a numeric grade: " << endl;
    cin >> grade;

    //grade calculation 90-100
    if(grade == 100 || grade >= 90)
    {
        cout << "The letter grade is A." << endl;
    }

    //grade calculation 80-89.9
    else if (grade >= 80 && grade <= 89.9)
    {
        cout << "The letter grade is B." << endl;
    }

    //grade calculation 70-79.9
    else if(grade >= 70 && grade <= 79.9)
    {
        cout << "The letter grade is C." << endl;
    }

    //grade calculation 60-69.9
    else if(grade >= 60 && grade <= 69.9)
    {
        cout << "The letter grade is D." << endl;
    }
    
    //grade calculation less than or equal to 59.9
    else if(grade <= 59.9)
    {
        cout << "The letter grade is F." << endl;
    }

    //user entered invaid grade
    else
    {
        cout << "Error: Please try again." << endl;
    }


    return 0;
}