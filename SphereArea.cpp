/*
@author: Ivy Slusser
@date: 06/14/2026
@purpose: This program calculates the volume of a sphere with a given radius.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main ()
{
    //Values to calculate the volume of the sphere
    float Pi = 3.1415;
    float radius = 7;
    //Formula: V = 4/3Pi * r * r * r
    cout << "The volume of the sphere is: " << 4/3 * Pi * radius * radius * radius;
}