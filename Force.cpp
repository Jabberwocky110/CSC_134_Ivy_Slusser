/*
@author: Ivy Slusser
@date: 06/10/2026
@purpose: This program calculates force.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
int main()
{
   //Values for mass and acceleration
   double m = 10;
   double a = 9.81;
   //Velocity is calculated.
   double F = m * a;
   //The result is printed.
   cout << "The force is " << F << " newtons.";
   return 0;
}