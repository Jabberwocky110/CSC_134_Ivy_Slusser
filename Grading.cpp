/*
@author: Ivy Slusser
@date: 06/21/2026
@purpose: This program calculates the average of three grades and then calculates a letter grade.
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
    cin >> num1 >> num2 >> num3;
    //The numbers are added.
    double Average = num1 + num2 + num3;
    //The result is calculated.
    double YOUR_RESULT_HERE = Average/3;
    //If statements determine the letter grade based on a variety of scenarios.
    if (YOUR_RESULT_HERE >= 90 && YOUR_RESULT_HERE <=100)
    {
    //The letter grade A is printed.
    cout << "A" << endl;
    }
    else if (YOUR_RESULT_HERE >= 80 && YOUR_RESULT_HERE <=89)
    {
    //The letter grade B is printed.
    cout << "B" << endl;
    }
    else if (YOUR_RESULT_HERE >= 70 && YOUR_RESULT_HERE <=79)
    {
    //The letter grade C is printed.
    cout << "C" << endl;
    }
    else if (YOUR_RESULT_HERE >= 60 && YOUR_RESULT_HERE <=69)
    {
    //The letter grade D is printed.
    cout << "D" << endl;
    }
    else if (0 <= YOUR_RESULT_HERE <= 59)
    {
    //The letter grade F is printed.
    cout << "F" << endl;
    }
    //The else statement catches inavalid numbers.
    else 
    {
        cout << "The numbers you entered were invalid as grades." << endl;
    }
    return 0;
}