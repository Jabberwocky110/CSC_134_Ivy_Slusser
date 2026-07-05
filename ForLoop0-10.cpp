/*
@author: Ivy Slusser
@date: 07/04/2026
@purpose: This program generates a for loop that iterates from 0 to 10.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
    //The conditions to the loop are created, and the loop iterates when number is from 0 to 10 as number increases.
    for (int number = 0; number <= 10; number++)
    {
        //The number prints.
       cout << number << endl;
    }
}