/*
@author: Ivy Slusser
@date: 06/14/2026
@purpose: This program converts temperature from Fahrenheit to Celsius.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main ()
{
    //The temperature uses floating points.
    float Temperature;
    //The user enters a value for the temperature in Fahrenheit.
    cout << "Enter a Temperature in Fahrenheit: ";
    cin >> Temperature;
    //The temperature in Celsius is calculated and printed.
    cout << "The temperature in Celsius is: " << (Temperature - 32) * 5/9;
}