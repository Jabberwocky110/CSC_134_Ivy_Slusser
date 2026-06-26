/*
@author: Ivy Slusser
@date: 06/25/2026
@purpose: This program generates an infinite loop.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main ()
{
   //A counter is created.
   int count = 0;
   //While the counter is greater than or equal to zero, the loop continues.
   while (count >= 0)
   {
       //Each time the message is printed, it is on a new line.
       cout << "This is infinite\n";
       //The counter increases after each iteration inifnitely. 
       count++;
   }
}