/*
@author: Ivy Slusser
@date: 06/10/2026
@purpose: This program calculates distance.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
int main()
{
   //Values for velocity and time
   int v = 80;
   int t = 2;
   //Distance is calculated.
   int x = v * t;
   //The result is printed.
   cout << "The distance traveled is " << x << " miles.";
   return 0;
}