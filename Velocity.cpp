/*
@author: Ivy Slusser
@date: 06/10/2026
@purpose: This program calculates velocity.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
int main()
{
   //Values for time and distance
   int t = 4;
   int x = 400;
   //Velocity is calculated.
   int v = x/t;
   //The result is printed.
   cout << "The velocity of the object is " << v << " miles per hour.";
   return 0;
}