/*
@author: Ivy Slusser
@date: 06/14/2026
@purpose: This program calculates the area of a circle with a given radius.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main ()
{
    //Values to calculate the area of the circle
    float Pi = 3.1415;
    float radius = 19;
    //Formula: A = Pi * r * r
    cout << "The area of the circle is: " << Pi * radius * radius;
}