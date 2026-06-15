/*
@author: Ivy Slusser
@date: 06/14/2026
@purpose: This program adds two floating point numbers and prints the result.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main ()
{
    //Two floating point numbers are created.
    float num1 = 3.1415926535;
    float num2 = 3.1337;
    //The numbers are added. 
    float result = num1 + num2;
    //The result is printed.
    cout << result;
    return 0;
}