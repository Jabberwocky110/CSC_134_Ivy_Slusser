/*
@author: Ivy Slusser
@date: 07/05/2026
@purpose: This program generates a for loop that displays a multiplication table for a number.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
   //The user inputs a number.
   int number;
   cout << "Enter a number: ";
   cin >> number;
   //The table doesn't print for numbers out of bounds.
   if (number > 12 || number < 0)
   {
     cout << "That number is beyond the bounds of typical multiplication tables.";
   }
   else
   {
      //This is the title for the table.
      cout << "Number | Number Multiplied" << endl;
      cout << "---------------------------" << endl;
      //The loop iterates from 0 to 12.
      for (int count = 0; count <= 12; count++)
      {
        //The number and its result are printed.
        cout << number << " " << number * count << endl;
      }
   }
}