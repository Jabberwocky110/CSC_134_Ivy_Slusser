/*
@author: Ivy Slusser
@date: 07/30/2026
@purpose: This program allows the user to store their daily sales in a file.
*/
//Include the iostream library for input and output
#include <iostream>
//This library is for file output.
#include <fstream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
   //A file is created.
   ofstream SalesFile("week9_lab1.txt");
   //Variables are created for the number of days and amount for the sales.
   int days;
   double sale;
   //The user enters the number of days for their sales.
   cout << "Enter the number of days for your sales: ";
   cin >> days;
   //The loop iterates for the number of days the user entered.
   for (int value = 0; value < days; value++)
   {
     //The user enters their sales for eavh day.
     cout << "Enter your sales for each day: ";
     cin >> sale;
     //The daily sales are listed in the file.
     SalesFile << "Sales for Day" << value + 1 << ": " << sale << endl;
   }
   //The file is closed.
   SalesFile.close();
}