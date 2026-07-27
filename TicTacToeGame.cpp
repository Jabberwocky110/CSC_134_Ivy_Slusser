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
      //The player number is printed when players enter their tokens, and the selection is captured.
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
      //Players cannot enter a number less than one or greater than nine.
      if (Selection < '1' || Selection > '9') 
      {
         //It is printed that the number is invalid input.
         cout << "Invalid input! Enter a number 1-9!" << "\n";
         //The value decreases by one so that the game can still run for nine token placements.
         value--;
         //The loop continues.
         continue;
      }
      //The player's choice is converted to an index.
      int choice = Selection - '1';
      //The row of the choice is determined by integer division.
      int row = choice / 3;
      //The column is determined based on the row.
      int column = choice % 3;
      //It is checked if a location already contains a token.
      if (board[row][column] == 'X' || board[row][column] == 'O') 
      {
         //It is printed that that location is already taken.
         cout << "That spot is already taken!" << "\n";
         //The value of placements decreases.
         value--;
         //The loop continues.
         continue;
      }
      //It is checked whether it is player 1 or 2's turn.
      if (value % 2 == 0)
      {
         //An X is placed for player 1. 
         board[row][column] = Player1Token;
      }
      else
      {
         //An O is placed for player 2.
         board[row][column] = Player2Token;
      }
      //This is where the winning conditions are checked.
      //It is checked if there are three Xs in a row.
      if (board[row][0] == 'X' && board[row][1] == 'X' && board[row][2] == 'X')
      {
         //If there are three Xs in a row, Player 1 wins.
         cout << "Player1 wins!" << "\n";
         //The loop ends.
         break;
      }
      //It is checked if there are three Os in a row.
      if (board[row][0] == 'O' && board[row][1] == 'O' && board[row][2] == 'O')
      {
         //If there are three Os in a row, Player Two wins.
         cout << "Player2 wins!" << "\n";
         //The loop ends if any winning condition is true.
         break;
      }
      //Here, the it is checked if there are three tokens in a column for either player.
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
      //This statement checks if there are three of any token in a left-right diagonal.
     if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) 
     {
       //It is determined whether the diagonal token is X or O.
       if (board[0][0] == 'X') 
       { 
        cout << "Player1 wins!" << "\n"; 
        break; 
       }
       else
       { 
         cout << "Player2 wins!" << "\n"; 
         break; 
       }
     }
     //It is checked whether there are three of any token in a right left diagonal.
     if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) 
     {
       //If the condition is true, it is determined whether the diagonal token was X or O.
       if (board[0][2] == 'X') 
       { 
         cout << "Player1 wins!" << "\n"; 
         break; 
       }
       else
       { 
         cout << "Player2 wins!" << "\n"; 
         break; 
       }
       //If all of the spaces on the board are taken, and none of the above conditions are true, it is printed that the game is a draw.
       if (value == 9)
       {
         cout << "It's a draw!";
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