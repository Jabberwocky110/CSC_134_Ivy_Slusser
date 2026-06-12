/*
@author: Ivy Slusser
@date: 06/10/2026
@purpose: This program determines a number divided by zero.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main ()
{
    //There is an integer.
    int num1 = 9;
    //The quotient is calculated.
    int quotient = num1/0;
    //The quotient is printed to the console.
    cout << "The quotient of " << num1 << " and " << 0 << " is " << quotient;
    return 0;
}