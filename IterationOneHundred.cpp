/*
@author: Ivy Slusser
@date: 06/27/2026
@purpose: This program generates a loop that iterates 100 times.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main ()
{
    //A counter is created and starts at 0 since 100 is exclusive.
   int count = 0;
   //The program loops for 100 iterations.
   while (count < 100)
   {
      //The iteration number is printed each time through the loop so the user can see it working.
      cout << "Iteration: " << count + 1 << "\n";
      //The counter increases.
      count++;
   }
   //The number of iterations completed is printed.
   cout << count << " iterations were completed!";
}