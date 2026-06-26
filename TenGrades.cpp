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
   //A counter is created for the loop.
   int GradeCount = 1;
   //The score or grades added starts at zero.
   float score = 0;
   //A variable is created to hold the grades.
   float Grade;
   //The loop iterates ten times.
   while (GradeCount <= 10)
   {
      //The user can see how many grades they entered.
      cout << "Enter grade " << GradeCount << " \n";
      //The user enters a grade.
      cin >> Grade;
      //The counter for the loop increases.
      GradeCount++;
      //The new grade is added to the score.
      score += Grade;
   }
   //The average is calculated.
   float Average = score/10;
   cout << "Your average grade is " << Average;
   return 0;
}