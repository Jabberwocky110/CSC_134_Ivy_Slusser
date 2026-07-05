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
   int number;
   cout << "Enter a number: ";
   cin >> number;
   cout << "Number | Number Multiplied" << endl;
   cout << "---------------------------" << endl;
   for (int count = 0; count <= 12; count++)
   {
      cout << number << " " << number * count << endl;
   }
}