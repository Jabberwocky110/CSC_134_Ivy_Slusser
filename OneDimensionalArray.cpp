/*
@author: Ivy Slusser
@date: 07/16/2026
@purpose: This program sums five intergers in an array.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
    //A total is created for the sum.
    int total = 0;
    //There are five numbers in the array.
    int Array[5] = {1, 2, 3, 4, 5};
    //The integers in the array are summed by index.
    for (int value = 0; value <= 4; value++)
    {
       total += Array[value];
    }
    //The sum of the integers is printed.
    cout << "The sum of the numbers in the array is " << total << ".";
}