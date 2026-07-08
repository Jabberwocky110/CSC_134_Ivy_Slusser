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
   //The user enters how much they have in their budget for the month.
   double amount;
   cout << "Enter the amount of money in your budget for this month: ";
   cin >> amount;
   //The condition the loop checks is an interger so that numbers other than 1 and 0 can be caught.
   int answer = 1;
   //Values are created for the total and individual expenses.
   double expense; 
   double TotalExpenses = 0;
   //The loop runs as long as the user decides to continue entering values.
   while (answer == 1)
   {
    //The user enters each new expense.
      cout << "Enter your expense: ";
      cin >> expense;
      //The expense is added to the total expenses.
      TotalExpenses += expense;
      //The user decides whether to continue entering expenses.
      cout << "Do you have more expenses? (1 for yes or 0 for no) ";
      cin >> answer;
      //This loop runs if the user decides to enter a number other than 1 or 0.
      while (answer != 0 && answer != 1)
        {
           cout << "Invalid input! You must enter 0 or 1!" << endl;
           //The user can reenter a value.
           cout << "Try again! ";
           cin >> answer;
        }
    }
    //The amount in the user's budget minus their expenses determines whther they stayed on budget.
   double budget = amount - TotalExpenses;
   //If the number remaining is greater than zero, the user has extra money to spend.
   if (budget > 0)
   {
     cout << "You are " << budget << " dollars under budget!";
   }
   //Here, the user is on budget/
   else if (budget == 0)
   {
     cout << "You are exactly on budget!";
   }
   else
   {
    //Since the amount under is negative, the sign is switched so the user can see how far they were overbudget.
     cout << "You are " << -budget << " dollars over budget!";
   }
   return 0;
}