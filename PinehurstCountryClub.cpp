/*
@author: Ivy Slusser
@date: 07/08/2026
@purpose: This program calculates an increase in membership fees for the Pinehurst Country Club.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
   //The cost of the country club membership is listed here.
   double fee = 250000;
   //The current cost is printed.
   cout << "The current sales are " << fee << endl;
   //The loop iterates 5 times.
   for (int count = 0; count < 5; count++)
   {
       //Each year the fee increases by six percent.
       fee = fee * 1.06;
       //The fee is printed for each projected year.
       cout << "The projected sales for year " << count + 1 << " are: " << fee << endl;
   }
}