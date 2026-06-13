/*
@author: Ivy Slusser
@date: 06/10/2026
@purpose: This program calculates voltage.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
int main()
{
   //Values for current and resistance
   int I = 10;
   int R = 2;
   //Velocity is calculated.
   int V = I * R;
   //The result is printed.
   cout << "The voltage is " << V << " volts.";
   return 0;
}