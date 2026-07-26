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
   char board[3][3] = {
      {'1', '2', '3'}, 
      {'4', '5', '6'},
      {'7', '8', '9'}
      };
   char Player1Token = 'X';
   char Player2Token ='O';
   char Selection;
   cout << "Player One is X. Player 2 is O. Here is the board: " << "\n";
   for (int i = 0; i < 3; i++)
   {
     for (int j = 0; j < 3; j++)
     {
        cout << " " << board[i][j] << " ";
        if (j < 2)
        {
         cout << "|";
        }
     }
     cout << "\n";
     if (i < 2)
     {
      cout << "-----------" << "\n";
     }
   }
   for (int value = 0; value < 9; value++)
   {
      int PlayerNumber = value % 2;
      if (PlayerNumber == 0)
      {
        cout << "Player1 " << "enter where you want to enter your piece (1-9): ";
        cin >> Selection;
      }
      else
      {
        cout << "Player2 " << "enter where you want to enter your piece (1-9): ";
        cin >> Selection;
      }
      int choice = Selection - '1';
      int row = choice / 3;
      int column = choice % 3;
      if (value % 2 == 0)
      {
         board[row][column] = Player1Token;
      }
      else
      {
         board[row][column] = Player2Token;
      }
      if (board[row][0] == 'X' && board[row][1] == 'X' && board[row][2] == 'X')
      {
         cout << "Player1 wins!";
         break;
      }
      else if (board[row][0] == 'O' && board[row][1] == 'O' && board[row][2] == 'O')
      {
         cout << "Player2 wins!";
         break;
      }
      else if (board[0][column] == 'X' && board[1][column] == 'X' && board[2][column] == 'X')
      {
         cout << "Player1 wins!";
         break;
      }
      else if (board[0][column] == 'O' && board[1][column] == 'O' && board[2][column] == 'O')
      {
         cout << "Player2 wins!";
         break;
      }
   }
    for (int i = 0; i < 3; i++)
   {
     for (int j = 0; j < 3; j++)
     {
        cout << " " << board[i][j] << " ";
        if (j < 2)
        {
         cout << "|";
        }
     }
     cout << "\n";
     if (i < 2)
     {
      cout << "-----------" << "\n";
     }
   }
}