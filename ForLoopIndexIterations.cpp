/*
@author: Ivy Slusser
@date: 07/04/2026
@purpose: This program generates a for loop that iterates the number of times a user selects.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
    //A variable is created for a number.
   int number;
   //The user enters their number.
   cout << "Enter a number: ";
   cin >> number;
   //A counter starts at zero, and the loop iterates when the counter is less than the number.
   for (int count = 0; count < number; count++)
   {
      //The counter is printed.
      cout << count << endl;
   }
}
