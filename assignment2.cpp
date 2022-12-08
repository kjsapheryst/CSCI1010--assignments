// Kira Cornejo
// CSCI 1010 002
// Assignment 2
// Write a program to ask the user to enter the first 12 digits and then calculate the check digit. 

#include <iostream>
using namespace std;

int main()
{

    //defining variables used throughout code (digits user enters)
    int dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9, dig10, dig11, dig12, checking, checking2, checking3, checking4, checking5, finalChecking;

    //input of all 12 digits
    cout << "Please enter the first 12 digits, use a space to separate them: " << endl;
    cin >> dig1 >> dig2 >> dig3 >> dig4 >> dig5 >> dig6 >> dig7 >> dig8 >> dig9 >> dig10 >> dig11 >> dig12;

    //calculations used to determine checking digit
    checking = dig2 + dig4 + dig6 + dig8 + dig10 + dig12;
    checking2 = dig1 + dig3 + dig5 + dig7 + dig9 + dig11;
    checking3 = (checking * 3) + checking2;
    checking4 = checking3 - 1;
    checking5 = checking4 % 10;
    finalChecking = 9 - checking5;

    cout << "The checking digit is: " << finalChecking << endl;

    return 0;
}