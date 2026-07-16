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
  int ArrayNumber;
  int total = 0;
  int GradeArray[ArrayNumber];
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
  for (int value = 0; value < ArrayNumber; value++)
  {
    total += GradeArray[value];
  }
  float average = total/10.0;
  cout << "The average of your grades is " << average << ".";
}