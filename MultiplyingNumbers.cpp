/*
@author: Ivy Slusser
@date: 06/10/2026
@purpose: This program determines the product of two numbers.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main ()
{
    //There are two integers.
    int num1 = 3;
    int num2 = 8;
    //The product is calculated.
    int product = num1 * num2;
    cout << "The product of " << num1 << " and " << num2 << " is " << product;
    return 0;
}