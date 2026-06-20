/*
@author: Ivy Slusser
@date: 06/20/2026
@purpose: This program calculates the average of three numbers.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main ()
{
    //Variables are created for the numbers. 
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    //The user inputs three integers.
    cin >> num1, num2, num3;
    //The numbers are added.
    double Average = num1 + num2 + num3;
    //The result is calculated.
    double YOUR_RESULT_HERE = Average/3;
    //The result is printed.
    cout << "The average of your three numbers is " << YOUR_RESULT_HERE;
}