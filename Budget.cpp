/*
@author: Ivy Slusser
@date: 07/08/2026
@purpose: This program determines whether a user is successfully budgeting.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
   double amount;
   cout << "Enter the amount of money in your budget for this month: ";
   cin >> amount;
   bool answer = 1;
   double expense; 
   double TotalExpenses = 0;
   while (answer == 1)
   {
      cout << "Enter your expense: ";
      cin >> expense;
      TotalExpenses += expense;
      cout << "Do you have more expenses? (1 for yes or 0 for no) ";
      cin >> answer;
      if (answer != 0 && answer != 1)
      {
        cout << "Invalid input! You must enter 0 or 1!" << endl;
        cout << "Try again: ";
        cin >> answer;
      }
   }
   double budget = amount - TotalExpenses;
   if (budget > 0)
   {
     cout << "You are " << budget << " dollars under budget!";
   }
   else if (budget == 0)
   {
     cout << "You are exactly on budget!";
   }
   else
   {
     cout << "You are " << -budget << " dollars over budget!";
   }
}