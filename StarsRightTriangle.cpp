/*
@author: Ivy Slusser
@date: 07/07/2026
@purpose: This program generates a right triangle of asterisks with the height determined by the user.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
  //The user decides how many rows they want in the triangle.
  int rows;
  cout << "Enter how many rows you want in the triangle ";
  cin >> rows;
  //A variable is created for the star character.
  char star = '*';
  //The outer loop iterates to make the triangle the height that the user designated.
  for (int count = 0; count < rows; count++)
  {
    //To get rows that aren't equal to the user's number, the inner loop prints stars that are equal to the count of the outer loop.
     for (int counted = 0; counted <= count; counted++)
     {
        cout << star;
     }
     //The outer loop creates new lines.
     cout << endl;
  }
}