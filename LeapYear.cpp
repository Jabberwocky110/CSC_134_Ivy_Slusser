/*
@author: Ivy Slusser
@date: 06/22/2026
@purpose: This program determines whether a year is a leap year.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main ()
{
   int year;
   cout << "Enter a common era year: ";
   cin >> year;
   if (year > 99999 || year < 0)
   {
      cout << "The year you entered is out of range!";
   }
   else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
   {
      cout << "The year you entered " << year << " is a leap year.";
   }
   else
   {
      cout << "The year you entered " << year << " is NOT a leap year.";
   }
}