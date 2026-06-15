/*
@author: Ivy Slusser
@date: 06/14/2026
@purpose: This program calculates temperature rises by percentages in cities.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main ()
{
    //The original temperatures in the cities are added.
    double NewYorkCity = 85;
    double Denver = 88;
    double Phoenix = 106;
    //The temperature increase is added.
    double increase = 1.02;
    //The new temperatures are calculated and printed.
    cout << "The new average temperatures are: New York City: " << NewYorkCity * increase << " Denver: " << Denver * increase << " Phoenix: " << Phoenix * increase;
}