#include <iostream>
using namespace std;

char cell[10] = {' ', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int count = 0;
void gameBoard()
{
     cout << "\n\n\t     |     |     " << endl;
     cout << "\t  " << cell[1] << "  |  " << cell[2] << "  |  " << cell[3] << endl;
     cout << "\t_____|_____|_____" << endl;
     cout << "\t     |     |     " << endl;
     cout << "\t  " << cell[4] << "  |  " << cell[5] << "  |  " << cell[6] << endl;
     cout << "\t_____|_____|_____" << endl;
     cout << "\t     |     |     " << endl;
     cout << "\t  " << cell[7] << "  |  " << cell[8] << "  |  " << cell[9] << endl;
     cout << "\t     |     |     \n\n"
          << endl;
}

int checkWinner()
{
     if (cell[1] == 'X' && cell[2] == 'X' && cell[3] == 'X')
     {
          cell[1] = cell[2] = cell[3] = '*';
          return 1;
     }
     else if (cell[4] == 'X' && cell[5] == 'X' && cell[6] == 'X')
     {
          cell[4] = cell[5] = cell[6] = '*';
          return 1;
     }
     else if (cell[7] == 'X' && cell[8] == 'X' && cell[9] == 'X')
     {
          cell[7] = cell[8] = cell[9] = '*';
          return 1;
     }
     else if (cell[1] == 'X' && cell[5] == 'X' && cell[9] == 'X')
     {
          cell[1] = cell[5] = cell[9] = '*';
          return 1;
     }
     else if (cell[1] == 'X' && cell[4] == 'X' && cell[7] == 'X')
     {
          cell[1] = cell[4] = cell[7] = '*';
          return 1;
     }
     else if (cell[2] == 'X' && cell[5] == 'X' && cell[8] == 'X')
     {
          cell[2] = cell[5] = cell[8] = '*';
          return 1;
     }
     else if (cell[3] == 'X' && cell[6] == 'X' && cell[9] == 'X')
     {
          cell[3] = cell[6] = cell[9] = '*';
          return 1;
     }
     if (cell[1] == 'O' && cell[2] == 'O' && cell[3] == 'O')
     {
          cell[1] = cell[2] = cell[3] = '*';
          return 2;
     }
     else if (cell[4] == 'O' && cell[5] == 'O' && cell[6] == 'O')
     {
          cell[4] = cell[5] = cell[6] = '*';
          return 2;
     }
     else if (cell[7] == 'O' && cell[8] == 'O' && cell[9] == 'O')
     {
          cell[7] = cell[8] = cell[9] = '*';
          return 2;
     }
     else if (cell[1] == 'O' && cell[5] == 'O' && cell[9] == 'O')
     {
          cell[1] = cell[5] = cell[9] = '*';
          return 2;
     }
     else if (cell[1] == 'O' && cell[4] == 'O' && cell[7] == 'O')
     {
          cell[1] = cell[4] = cell[7] = '*';
          return 2;
     }
     else if (cell[2] == 'O' && cell[5] == 'O' && cell[8] == 'O')
     {
          cell[2] = cell[5] = cell[8] = '*';
          return 2;
     }
     else if (cell[3] == 'O' && cell[6] == 'O' && cell[9] == 'O')
     {
          cell[3] = cell[6] = cell[9] = '*';
          return 2;
     }

     if (count == 9)
          return -1;
     else
          return 0;
}

int main()
{
     int player = 0, choice, i = 1;

     cout << "Player 1: 'X'\nPlayer 2: 'O" << endl;

     do
     {
          player = (player++ % 2 + 1);
          int winner = checkWinner();
          count++;
          gameBoard();
          if (winner == 1)
          {
               cout << "\n\tPlayer 1 has Won!" << endl;
               break;
          }
          else if (winner == 2)
          {
               cout << "\n\tPlayer 2 has Won!" << endl;
               break;
          }
          else if (winner == -1)
          {
               cout << "\n\tMatch Withdraw" << endl;
               break;
          }
     re_move:
          cout << "Player " << player << ", enter your move: ";
          cin >> choice;
          if (cell[choice] == 'X' || cell[choice] == 'O' || choice > 9)
          {
               cout << "\t-- Invalid Cell --" << endl;
               goto re_move;
          }
          if (player % 2 == 1)
          {
               cell[choice] = 'X';
          }
          else
          {
               cell[choice] = 'O';
          }
     } while (i == 1);
}