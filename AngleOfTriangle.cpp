/*
@author: Ivy Slusser
@date: 06/25/2026
@purpose: This program calculates an unknown angle of a triangle in degrees.
*/
//Include the iostream library for input and output
#include <iostream>
//Include cmath to aid in mathematcial calculations
#include <cmath>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main ()
{
    //There are variables for the lengths of the sides.
    int x = 3;
    int y = 4;
    //Using the Pythagorean Theorem, the length of the hypotheneuse is calculated.
    int c = sqrt((x * x) + (y * y));
    //The atan2 function calculates the angle in degrees.
    double radians = atan2(y, x);
    //acos is used to get the actual value of pi.
    double Pi = acos(-1.0);
    //The angle is converted to degrees.
    double theta = radians * 180/Pi;
    //Because double was allowing for too much precision, the angle is rounded to two decimal places, using the round function.
    double Theta = round(theta * 100.0)/100.0;
    //It is determined if the triangle is a 3-4-5 triangle.
    if (Theta == 53.13)
    {
        cout << "This is a 3-4-5 triangle";
    } 
    else
    {
        cout << "This is NOT a 3-4-5 triangle";
    }
    return 0;
}