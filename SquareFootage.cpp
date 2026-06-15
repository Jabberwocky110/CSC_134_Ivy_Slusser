/*
@author: Ivy Slusser
@date: 06/14/2026
@purpose: This program calculates the square footage of a house.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main ()
{
    //Values to calculate the square footage of the house
    int length = 50;
    int width = 32;
    //Formula: A = l * w
    cout << "The square footage of the house is: " << length * width << " feet squared.";
}