/*
@author: Ivy Slusser
@date: 07/07/2026
@purpose: This program generates a sqaure pattern of asterisks with the side length determined by the user.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
  //The user decides the side length of their square.
  int rows;
  cout << "Enter the side lenth of your square: ";
  cin >> rows;
  //A variable is created for the star character.
  char star = '*';
  //The outer loop iterates to make the square the height that the user designated.
  for (int count = 0; count < rows; count++)
  {
    //To keep the side length constant, the number of stars printed in each row is based on the user's number.
     for (int counted = 0; counted < rows; counted++)
     {
        cout << star << " ";
     }
     //The outer loop creates new lines.
     cout << endl;
  }
}