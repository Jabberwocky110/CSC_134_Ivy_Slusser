/*
@author: Ivy Slusser
@date: 06/10/2026
@purpose: This program determines a number divided by zero.
*/
//Include the iostream library for input and output
#include <iostream>
using namespace std;
//A function is created.
int main ()
{
    //There is an integer.
    int num1 = 9;
    //The quotient is calculated.
    int quotient = num1/0;
    cout << "The quotient of " << num1 << " and " << 0 << " is " << quotient;
    return 0;
}