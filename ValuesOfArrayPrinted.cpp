/*
@author: Ivy Slusser
@date: 07/16/2026
@purpose: This program lists all eight planets and Pluto, using an array.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
  //The size of the array is defined.
  const int SIZE = 7;
  //The values are listed, and the latter values default to zero.
  int numberList[SIZE] = {1, 2, 4, 8};
  //Each value of the array is printed based on its index.
  for (int value = 0; value < SIZE; value++)
  {
     cout << "Array value " << value + 1 << ": " << numberList[value] << endl;
  }
  //The user is also able to select a position in the array to print.
  int Position;
  cout << "Enter the position (1-7) in the array that you would like to reference: " << endl;
  cin >> Position;
  //The position in the array that the user selected is printed.
  cout << numberList[Position - 1] << endl;
}