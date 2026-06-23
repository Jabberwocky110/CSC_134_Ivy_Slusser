/*
@author: Ivy Slusser
@date: 06/21/2026
@purpose: This program determines whether a letter is a vowel or consonant.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main ()
{
    //A variable for a character is created.
   char letter;
   cout << "Enter a letter: ";
   //The user enters a character.
   cin >> letter;
   //The letter is converted to lower case.
   letter = tolower(letter);
   //It is checked if the character is a number.
   if (isdigit(letter))
   {
      cout << "Enter a letter not a number";
   }
   //It is checked if the letter is one of the vowels: a, e, i, o, or u.
   else if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
   {
      cout << "Your letter is a vowel!";
   }
   //If the letter is not a vowel, it is a consonant.
   else
   {
    cout << "Your letter is a consonant!";
   }
}