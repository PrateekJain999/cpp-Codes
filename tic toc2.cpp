#include <iostream>
#include <string>
#include <ctime>

//Use the standard namespace
using namespace std;

// Declare global variables
char Board[9];

// Declare functions
void showBoard ( );
bool moveIsValid (int m);
int whoWon ( ); //Returns 0 if no one has won, 1 if player 1 has won, and 2 if player 2 has won
int Move = rand() %7 + 1;

 main ( )
{
    // Seed the random number.
    rand(time(NULL));

   // Declare local variables
   string Player_1_Name;
   string Player_2_Name;
   int Whose_Turn = 1; // 1 means it's player 1's turn, 2 means it's player 2's turn
   int Move; // Stores where the player wants to move
   int Total_Moves = 0;

   //Assign values to the playing board
   Board[0] = '0';
   Board[1] = '1';
   Board[2] = '2';
   Board[3] = '3';
   Board[4] = '4';
   Board[5] = '5';
   Board[6] = '6';
   Board[7] = '7';
   Board[8] = '8';

   // Get player names
   cout << "Player 1: Please enter your name." << endl;
   cin >> Player_1_Name;
   cout << "Player 2: Computer." << endl;
   cin >> Player_2_Name;

   while (whoWon ( ) == 0 && Total_Moves < 9)
   {
      // Do this until the player chooses a valid move
      do
      {

         // Show the board
         showBoard ( );

         // Tell which player to move
         if (Whose_Turn == 1)
         {
            cout << Player_1_Name << ": It's your turn." << endl;
         }

         else
         {
            cout << Player_2_Name << ": It's your turn." << endl;
         }

         // Get the move
         cout << "Enter the number of the spot where you'd like to move." << endl;
         cin >> Move;
      } while (moveIsValid (Move) != true);

      // Add 1 to Total_Moves
      Total_Moves++;

      // Change whose turn it is
      switch (Whose_Turn)
      {
      case (1):
         {
            Board[Move] = 'x';
            Whose_Turn = 2;
            break;
         }

      case (2):
         {
            Board[Move] = 'o';
            Whose_Turn = 1;
         }
      }
   }

   // Show the board
   showBoard ( );

   if (whoWon ( ) == 1)
   {
      cout << Player_1_Name << " has won the game!" << endl;
   }

   else if (whoWon ( ) == 2)
   {
      cout << Player_2_Name << " has won the game!" << endl;
   }

   else
   {
      cout << "It's a tie game!" << endl;
   }

   system ("PAUSE");
}

void showBoard ( )
{
   cout << endl;
   cout << Board[0] << " | " << Board[1] << " | " << Board[2] << endl;
   cout << "--+---+--" << endl;
   cout << Board[3] << " | " << Board[4] << " | " << Board[5] << endl;
   cout << "--+---+--" << endl;
   cout << Board[6] << " | " << Board[7] << " | " << Board[8] << endl;
   cout << endl;
}

bool moveIsValid (int m)
{
   if (Board[m] != 'x' && Board[m] != 'o')
   {
      return true;
   }

   else
   {
      return false;
   }
}

int whoWon ( )
{
   if (Board[0] == Board[1] && Board[1] == Board[2])
   {
      if (Board[0] == 'x')
      {
         return 1;
      }

      else
      {
         return 2;
      }
   }

   if (Board[3] == Board[4] && Board[4] == Board[5])
   {
      if (Board[3] == 'x')
      {
         return 1;
      }

      else
      {
         return 2;
      }
   }

   if (Board[6] == Board[7] && Board[7] == Board[8])
   {
      if (Board[6] == 'x')
      {
         return 1;
      }

      else
      {
         return 2;
      }
   }

   if (Board[0] == Board[3] && Board[3] == Board[6])
   {
      if (Board[0] == 'x')
      {
         return 1;
      }
      else
      {
         return 2;
      }
   }

   if (Board[1] == Board[4] && Board[4] == Board[7])
   {
      if (Board[1] == 'x')
      {
         return 1;
      }
      else
      {
         return 2;
      }
   }
   if (Board[2] == Board[5] && Board[5] == Board[8])
   {
      if (Board[2] == 'x')
      {
         return 1;
      }
      else
      {
         return 2;
      }
   }

   if (Board[0] == Board[4] && Board[4] == Board[8])
   {
      if (Board[0] == 'x')
      {
         return 1;
      }
      else
      {
         return 2;
      }
   }

   if (Board[2] == Board[4] && Board[4] == Board[6])
   {
      if (Board[2] == 'x')
      {
         return 1;
      }
      else
      {

         return 2;
      }
   }
   return 0;
}
