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
  //An array is created with a specified size.
  const int TOTAL_SIZE = 10;
  //Since only eight values are listed, the other two values in the array default to zero.
  int numbers[TOTAL_SIZE] = {10, 90, 2, 25, 44, 88, 0, 4};
  //The outer loop iterates for the size of the array.
  for (int value = 0; value < TOTAL_SIZE; value++)
  {
    for (int PreviousValue = 0; PreviousValue < TOTAL_SIZE - value - 1; PreviousValue++)
    {
     //The values in the array are swapped if they are greater than the number after them.
     if (numbers[PreviousValue] > numbers[PreviousValue + 1])
     {
       //A variable is created to swap the values in the array.
       int temp = numbers[PreviousValue];
       //This line enables the continuation of the sorting after the first value and switches each value incrementally in the array.
       numbers[PreviousValue] = numbers[PreviousValue + 1];
       numbers[PreviousValue + 1] = temp;
     }
    }
  }
  //The sorted array is printed.
  cout << "The array sorted is ";
  for  (int i = 0; i < TOTAL_SIZE; i++)
  {
    //Each number in the array is printed with a space after it.
    cout << numbers[i] << " ";
  }
}