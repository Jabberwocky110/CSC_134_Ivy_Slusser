/*
@author: Ivy Slusser
@date: 07/07/2026
@purpose: This program generates a chessboard pattern of asterisks with the row length determined by the user.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
   //The user decides the row length of the chessboard.
   int RowLength;
   cout << "Enter the length of each side of your chessboard: ";
   cin >> RowLength;
   //The height of the chessboard is based on the user's number.
   for (int count = 1; count <= RowLength; count++)
   {
    //Since there are two different row patterns, the pattern of the row switches with the count of the outer loop.
    if (count % 2 == 1)
    {
       //For odd row lengths, half the user's number is increased by one so that there is another asterisk and space.
       for (int counted = 0; counted < (RowLength/2) + 1; counted++)
       {
        //For odd rows, the asterisk is before the space.
         cout << "*  ";
       }
    }
    else
    {
       //The even rows in the chessboard do not get an extra asterisk with odd numbers.
       for (int counted = 0; counted < RowLength/2; counted++)
       {
        //For even rows, the asterisk is after the space.
         cout << "  *";
       }
    }
    //The outer loop determines when lines end.
     cout << endl;
   }
}