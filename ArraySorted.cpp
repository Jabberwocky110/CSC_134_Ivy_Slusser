/*
@author: Ivy Slusser
@date: 07/16/2026
@purpose: This program sorts an array into ascending order.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
  const int TOTAL_SIZE = 10;
  int numbers[TOTAL_SIZE] = {10, 90, 2, 25, 44, 88, 0, 4};
  int index = 0;
  int NumbersSorted[TOTAL_SIZE] = {};
  for (int value = 0; value < TOTAL_SIZE; value++)
  {
    for (int PreviousValue = numbers[index]; PreviousValue < TOTAL_SIZE; index++)
    {
     if (numbers[value + 1] <= PreviousValue)
     {
       NumbersSorted[PreviousValue] = numbers[value + 1];
     }
     else
     {
       NumbersSorted[PreviousValue] = numbers[value];
     }
    }
  }
  cout << "The array sorted is ";
  for  (int i = 0; i < TOTAL_SIZE; i++)
  {
    cout << NumbersSorted[i] << " ";
  }
}