/*
@author: Ivy Slusser
@date: 07/05/2026
@purpose: This program generates a for loop that sums the loop index and an adder variable.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
    //Variables are created for the added value and the sum.
   int sumOp = 0;
   int adder = 10;
   //The loop iterates 50 times.
   for (int count = 0; count < 50; count++)
   {
      //The sum is calculated.
      sumOp += adder + count;
      //The sum is printed for the entirety of the loop and that individual iteration.
      cout << "The entire sum of all iterations is: " << sumOp << " The sum for this iteration is: " << adder + count << endl;
   }
}