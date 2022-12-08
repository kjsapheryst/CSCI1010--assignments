#include <iostream>
using namespace std;

int main(){

int radius;
double area;
double pi = 3.14;

cout << "Please enter the value of the radius: " << endl;
    cin >> radius;

area = pi * (radius * radius);
cout << "The area of the circle is: " << area << endl;

    return 0;
}