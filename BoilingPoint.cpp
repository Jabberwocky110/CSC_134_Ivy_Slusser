/*
@author: Ivy Slusser
@date: 06/27/2026
@purpose: This program prompts the user to enter a temperature of 212.34 degrees Fahrenhiet.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main ()
{
    //A variable is created to store the termperature.
    double temperature;
    //The loop continues unless the temperaure is 212.34 degrees.
    while (temperature != 212.34)
    {
        cout << "Enter a temperature: ";
        cin >> temperature;
    }
    //When the correct temperature is entered, the loop ends, and the user recieves a message that the temperature is set.
    cout << "The temperature has been successfully set, thank you.";
}