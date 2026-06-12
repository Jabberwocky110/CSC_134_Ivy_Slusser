/*
@author: Ivy Slusser
@date: 06/10/2026
@purpose: This program calculates the square root of a number.
*/
//Include the iostream library for input and output
#include <iostream>
//Include this library to calculate the square root
#include <cmath>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main ()
{
    double num1, result;
    cout <<"Enter a real positive number: ";
    //The number is captured.
    cin >> num1;
    //The square root is calculated.
    result = sqrt(num1);
    cout << "The square root of " << num1 << " is " << result << endl;
    return 0;
}