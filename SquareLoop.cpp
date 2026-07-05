/*
@author: Ivy Slusser
@date: 07/05/2026
@purpose: This program generates a for loop that squares numbers 0 to 100.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
   //A variable is created for the maximum number in the table.
   int maxNum = 100;
   //This is the title for the table.
   cout << "Number | Number Squared " << endl;
   cout << "---------------------------" << endl;
   //A loop iterates when a new variable, the minimum number in the table is less than the maximum number.
   for (int minNum = 0; minNum <= maxNum; minNum++)
   {
      //The numbers are printed to the table, with one less space before the square if they are more digits.
      if (minNum < 10)
      {
        cout << "       "  << minNum << "        " << minNum * minNum << endl;
      }
      else if (minNum >= 10 && minNum < 100)
      {
        cout << "      "  << minNum << "        " << minNum * minNum << endl;
      }
      else
      {
        cout << "     "  << minNum << "        " << minNum * minNum << endl;
      }
   }
}