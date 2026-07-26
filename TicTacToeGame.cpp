/*
@author: Ivy Slusser
@date: 07/30/2026
@purpose: This program is a tic-tac-toe game that uses a 2D array.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
   int board[3][3] = {};
   char Player1Token = 'X';
   char Player2Token ='O';
   cout << "Player One is X. Player 2 is O. Here is the board: " << "\n";
   for (int i = 0; i < 3; i++)
   {
     for (int j = 0; j < 3; j++)
     {
        cout << " |";
     }
     cout << "\n" << "______" << "\n";
   }
}