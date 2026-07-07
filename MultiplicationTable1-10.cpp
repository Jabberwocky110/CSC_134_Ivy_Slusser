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
   for (int num = 0; num <=10; num++)
   {
     for (int number = 0; number <=10; number++)
     {
        cout << num * number << "     ";
     }
     cout << endl;
   }
   return 0;
}