/*
@author: Ivy Slusser
@date: 07/16/2026
@purpose: This program lists and prints the days of the week, using an array.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
   //An array is created with all of the days of the week.
   string WeeksArray[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
   //The days are printed 1-7.
   for (int value = 1; value <= 7; value++)
   {
      cout << "Day " << value << ": " << WeeksArray[value - 1] << endl;
   }
}