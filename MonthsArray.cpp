/*
@author: Ivy Slusser
@date: 07/16/2026
@purpose: This program lists the months of the year, using an array.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
   //The months from Feburary to December are listed in an array.
   int MonthsArray[11] = {28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   //The loop iterates from integers 2-12.
   for (int value = 2; value <= 12; value++)
   {
       //The months are printed with double spacing, and listed by integers 2-12, and the months are referenced in the array by their index.
       cout << "Month " << value << " has " << MonthsArray[value - 2] << " days." << endl;
       cout << "\n";
   }
}