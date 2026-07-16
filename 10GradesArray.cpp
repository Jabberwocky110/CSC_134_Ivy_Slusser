/*
@author: Ivy Slusser
@date: 07/16/2026
@purpose: This program enables a user to enter ten grades in an array and see the average.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
  //The initial value for the number of numbers in the array is created.
  const int ArrayNumber = 10;
  //A total is created for when the number of elements in the array are added.
  int total = 0;
  //The array of grades is initialized to ten values.
  int GradeArray[ArrayNumber];
  //The user inputs ten grades.
  cout << "Round to the nearest whole number and enter the grades to be averaged: ";
  cin >> GradeArray[0];
  cin >> GradeArray[1];
  cin >> GradeArray[2];
  cin >> GradeArray[3];
  cin >> GradeArray[4];
  cin >> GradeArray[5];
  cin >> GradeArray[6];
  cin >> GradeArray[7];
  cin >> GradeArray[8];
  cin >> GradeArray[9];
  //The grades in the array are added in a loop.
  for (int value = 0; value < ArrayNumber; value++)
  {
    //The grades in the array are referenced by index.
    total += GradeArray[value];
  }
  //The average is calculated.
  double average = total/10.0;
  //The average is printed.
  cout << "The average of your grades is " << average << ".";
}