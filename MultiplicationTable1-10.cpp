/*
@author: Ivy Slusser
@date: 07/07/2026
@purpose: This program generates a multiplication table from 1 to 10.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
   //Each loop includes numbers 1-10.
   for (int num = 1; num <=10; num++)
   {
     for (int number = 1; number <=10; number++)
     {
        //The numbers of each loop are multiplied and printed within the inner loop. The /t aligns the numbers.
        cout << num * number << "\t";
     }
     //As the outer loop iterates, it produces new lines.
     cout << endl;
   }
   return 0;
}