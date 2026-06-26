/*
@author: Ivy Slusser
@date: 06/25/2026
@purpose: This program generates an infinite loop.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main ()
{
   int GradeCount = 1;
   float score;
   float Grade;
   while (0 < GradeCount <= 10)
   {
      float PreviousGrade = Grade;
      score = Grade + PreviousGrade;
      float Grade;
      cout << "Enter grade " << GradeCount;
      cin >> Grade;
      GradeCount++;
   }
   float Average = score/10;
   cout << "Your average grade is " << Average;
}