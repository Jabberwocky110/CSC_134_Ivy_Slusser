/*
@author: Ivy Slusser
@date: 07/05/2026
@purpose: This program generates a for that counts down from 100.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
    //This variable counts the number of loop iterations.
    int count = 1;
    //The loop iterates when i is greater than zero, counting down from 100.
    for (int i = 100; i > 0; i--)
    {
      //The number of times the loop has iterated is printed.
      cout << "The loop has iterated " << count << " times. Loop iteration backwards: " << i << endl;
      count++;
    }
}