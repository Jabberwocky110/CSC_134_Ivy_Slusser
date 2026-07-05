/*
@author: Ivy Slusser
@date: 07/04/2026
@purpose: This program generates a for loop with an accumulator.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
  //The accumulator is initialized.
  int Accumulator = 0;
  //The loop iterates 100 times.
  for (int i = 0; i < 100; i++)
  {
    //The accumulator increases by 1.
    Accumulator++;
  }
  //The accumulator value is printed.
  cout << "The accumulator value is: " << Accumulator;
}