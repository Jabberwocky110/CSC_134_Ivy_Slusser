/*
@author: Ivy Slusser
@date: 07/05/2026
@purpose: This program simulates a rolling die.
*/
//Include the iostream library for input and output
#include <iostream>
//This is needed for randomness
#include <cstdlib>
//This is needed for time
#include <ctime>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
    //The user inputs how many times they want to roll the die.
   int RollNumber;
   cout << "Enter how many times you want to roll the die ";
   cin >> RollNumber;
   //This seeds the random number generator.
   srand(static_cast<unsigned int>(time(0)));
   //The loop iterates the number of times the user determined.
   for (int count = 1; count <= RollNumber; count++)
   {
     //The dice number is generated.
     int DiceNumber = rand() % 6 + 1;
     //The user sees what they rolled.
     cout << "You rolled " << DiceNumber << endl;
   }
}