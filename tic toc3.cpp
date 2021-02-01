#include <iostream>


int main()
{
    // Initializes Game Board and Example Board
    const int ROWS = 3;
    const int COLUMNS = 3;
    const int FULL_BOARD = 10;
    int numMoves = 0;
    char board[ROWS][COLUMNS] = {{'*', '*', '*'},
                                    {'*', '*', '*'},
                                        {'*', '*', '*'}};

    char example[ROWS][COLUMNS] = {{'0', '1', '2'},
                                    {'1', ' ', ' '},
                                        {'2', ' ', ' '}};

    int x;
    int y;
    char move;

    // Shows Example Board
    std::cout << "Here's the layout of the tic-tac-toe board:\n";
            for (int i=0; i < ROWS; ++i)
            {
                for (int j=0; j < COLUMNS; ++j)
                {
                    std::cout << example[i][j];
                }

                std::cout << std::endl;
            }

    do{

    if (numMoves == 3 || numMoves == 6)
        {
            std::cout << "Here's the layout of the tic-tac-toe board:\n";
            for (int i=0; i < ROWS; ++i)
            {
                for (int j=0; j < COLUMNS; ++j)
                {
                    std::cout << example[i][j];
                }

                std::cout << std::endl;
            }
        }

    if (numMoves == 0)
        std::cout << "\nPlayer 1 is X and goes first." << std::endl;

    // Determine what character is placed
    if (numMoves % 2)
        {
            move = '0';
            std::cout << std::endl;
        }

    else
        {
            move = 'X';
            std::cout << std::endl;
        }

    // Input for move location
    std::cout << "Row number: "; std::cin >> x; std::cout << std::endl;
    std::cout << "Column number: "; std::cin >> y; std::cout << std::endl;

    board[x][y] = move;

    // Shows updated Game Board
    std::cout << "Now the tic-tac-toe board is:\n";
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLUMNS; ++j)
        {
            std::cout << board[i][j];
        }

        std::cout << std::endl << std::endl;
    }

    // Check if someone has won the game
    if (
        board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X' || 
        board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X' ||
        board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X' ||
        board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X' ||
        board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X' ||
        board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X' ||
        board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X' ||
        board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X'
        )
            {
                std::cout << "Good job. Player 1 is the winner.";
                break;
            }

    else if (
        board[0][0] == '0' && board[0][1] == '0' && board[0][2] == '0' || 
        board[0][0] == '0' && board[1][0] == '0' && board[2][0] == '0' ||
        board[0][0] == '0' && board[1][1] == '0' && board[2][2] == '0' ||
        board[0][2] == '0' && board[1][1] == '0' && board[2][0] == '0' ||
        board[0][2] == '0' && board[1][2] == '0' && board[2][2] == '0' ||
        board[2][0] == '0' && board[2][1] == '0' && board[2][2] == '0' ||
        board[0][1] == '0' && board[1][1] == '0' && board[2][1] == '0' ||
        board[1][0] == '0' && board[1][1] == '0' && board[1][2] == '0'
        )
            {
                std::cout << "Good Job. Player 2 is the winner. ";
                break;
            }

     ++numMoves;



} while (numMoves < FULL_BOARD);

return 0;
}
