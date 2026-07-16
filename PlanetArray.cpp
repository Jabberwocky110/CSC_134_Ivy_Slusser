/*
@author: Ivy Slusser
@date: 07/16/2026
@purpose: This program lists all eight planets and Pluto, using an array.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
   string PlanetsArray[9] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
   for (int value = 0; value < 9; value++)
   {
      cout << "The planet: " << PlanetsArray[value];
   }
}