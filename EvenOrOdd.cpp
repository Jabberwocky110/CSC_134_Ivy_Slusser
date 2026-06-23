/*
@author: Ivy Slusser
@date: 06/22/2026
@purpose: This program determines whether a number is even or odd.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main ()
{
    //A variable is created for a number.
   int number;
   cout << "Enter a number: ";
   //The user enters a number.
   cin >> number;
   //The remainder of the number divided by two is calculated.
   int Even_Or_Odd = number % 2;
   //If the remainder is 0, the number is even.
   if (Even_Or_Odd == 0)
   {
    cout << "Your number is even!";
   }
   //If the remainder is 1, the number is odd.
   else if (Even_Or_Odd == 1)
   {
    cout << "Your number is odd!";
   }
}