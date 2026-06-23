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
    //A variable is created for a year.
   int year;
   cout << "Enter a common era year: ";
   //The user enters a year in the common era.
   cin >> year;
   //The year must not be more than five digits or less than zero.
   if (year > 99999 || year < 0)
   {
      cout << "The year you entered is out of range!";
   }
   //If the year is divisible by four and not 100 although it can be divisible by 400, the year is a leap year.
   else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
   {
      cout << "The year you entered " << year << " is a leap year.";
   }
   //If the year does not meet the conditions for a leap year, it is printed that the year is not a leap year. 
   else
   {
      cout << "The year you entered " << year << " is NOT a leap year.";
   }
}