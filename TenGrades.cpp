/*
@author: Ivy Slusser
@date: 06/26/2026
@purpose: This program calculates the average of ten grades.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main ()
{
   int GradeCount = 1;
   float score = 0;
   float Grade;
   while (GradeCount <= 10)
   {
      cout << "Enter grade " << GradeCount << " \n";
      cin >> Grade;
      GradeCount++;
      score += Grade;
   }
   float Average = score/10;
   cout << "Your average grade is " << Average;
   return 0;
}