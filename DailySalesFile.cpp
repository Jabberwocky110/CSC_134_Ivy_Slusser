/*
@author: Ivy Slusser
@date: 07/30/2026
@purpose: This program allows the user to store their daily sales in a file and the sum of the sales is listed.
*/
//Include the iostream library for input and output
#include <iostream>
//This library is for file output.
#include <fstream>
//This library is for formatting decimal places
#include <iomanip>
//This library is for formatting strings.
#include <sstream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
  //A file is created.
   ofstream SalesFile("week9_lab2.txt");
   //Variables are created for the number of days, amount for the sales, and the sum of all sales.
   int days;
   double sale;
   double TotalSales = 0.0;
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
     //The sale is added to the total.
     TotalSales += sale;
   }
   //The total is written in the file with formatting and two decimal places.
   SalesFile << "====================" << endl;
   SalesFile << "Total Sales: $" << fixed << setprecision(2) << TotalSales << endl;
   SalesFile << "====================" << endl;
   //The file is closed.
   SalesFile.close();
}