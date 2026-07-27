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
   //A board is created with numbers 1-9.
   char board[3][3] = {
      {'1', '2', '3'}, 
      {'4', '5', '6'},
      {'7', '8', '9'}
      };
   //Variables are created for X and O or the tokens.
   char Player1Token = 'X';
   char Player2Token ='O';
   //The variable for a player's selection on the board is created.
   char Selection;
   //The tokens are automatically assigned.
   cout << "Player One is X. Player 2 is O. Here is the board: " << "\n";
   //The board is printed, using nested loops.
   for (int i = 0; i < 3; i++)
   {
     for (int j = 0; j < 3; j++)
     {
        //There are three lines and three columns with numbers 1-9. 
        cout << " " << board[i][j] << " ";
        //The divider between columns is only printed twice.
        if (j < 2)
        {
         cout << "|";
        }
     }
     //A new line is created for the row divider.
     cout << "\n";
     //The row divider is only printed twice.
     if (i < 2)
     {
      //A new line is printed after the row divider.
      cout << "-----------" << "\n";
     }
   }
   //This loop runs nine times unless there is invalid input.
   for (int value = 0; value < 9; value++)
   {
      //This is so that players can see whose turn it is.
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
      if (Selection < '1' || Selection > '9') 
      {
         cout << "Invalid input! Enter a number 1-9!" << "\n";
         value--;
         continue;
      }
      int choice = Selection - '1';
      int row = choice / 3;
      int column = choice % 3;
      if (board[row][column] == 'X' || board[row][column] == 'O') 
      {
         cout << "That spot is already taken!" << "\n";
         value--;
         continue;
      }
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
         cout << "Player1 wins!" << "\n";
         break;
      }
      if (board[row][0] == 'O' && board[row][1] == 'O' && board[row][2] == 'O')
      {
         cout << "Player2 wins!" << "\n";
         break;
      }
      if (board[0][column] == 'X' && board[1][column] == 'X' && board[2][column] == 'X')
      {
         cout << "Player1 wins!" << "\n";
         break;
      }
      if (board[0][column] == 'O' && board[1][column] == 'O' && board[2][column] == 'O')
      {
         cout << "Player2 wins!" << "\n";
         break;
      }
     if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) 
     {
       if (board[1][1] == 'X') 
       { 
        cout << "Player1 wins!" << "\n"; 
        break; 
       }
       if (board[1][1] == 'O') 
       { 
         cout << "Player2 wins!" << "\n"; 
         break; 
       }
     }
     if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) 
     {
       if (board[1][1] == 'X') 
       { 
         cout << "Player1 wins!" << "\n"; 
         break; 
       }
       if (board[1][1] == 'O') 
       { 
         cout << "Player2 wins!" << "\n"; 
         break; 
       }
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