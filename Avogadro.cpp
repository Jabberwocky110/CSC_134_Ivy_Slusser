/*
@author: Ivy Slusser
@date: 06/14/2026
@purpose: This program prints Avogadro's number to the console.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main ()
{
    //A variable is created for Avogadro's Number.
    float avogadro = 6.02214076e23;
    //The number is printed, using e notation.
    cout << "Avogadro's Number: " << avogadro;
    return 0;
}