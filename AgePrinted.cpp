/*
@author: Ivy Slusser
@date: 06/14/2026
@purpose: This program prints a concatenated string of someone's age.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main ()
{
    //The variables are created for each of the strings.
    string verbiage = "Today I am ";
    string age = "25";
    string verbiage_end = " years old!";
    //The strings are concatenated.
    string concatenated = verbiage + age + verbiage_end;
    //The sentence is printed.
    cout << concatenated;
    return 0;
}