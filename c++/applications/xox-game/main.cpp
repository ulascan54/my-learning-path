#include <iostream>

using namespace std;

char matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

char player = 'X';

void Draw();
void Input();
void TogglePlayer();
bool isEnd();

int main()
{
    system("clear");
    bool game = true;
    cout << "Welcome to Tic Tac Toe" << endl;
    Draw();
    while (game)
    {
        Input();
        Draw();
        game = isEnd();
    }

    return 0;
}

void Draw()
{
    cout << "**********************************" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "**********************************" << endl;
}

void TogglePlayer()
{

    if (player == 'X')
    {
        player = 'O';
    }
    else
    {
        player = 'X';
    }
}

void Input()
{
    int a;
    cout << "Enter the number of fields:" << endl;
    cin >> a;

    switch (a)
    {
    case 1:
        matrix[0][0] = player;
        break;

    case 2:
        matrix[0][1] = player;
        break;
    case 3:
        matrix[0][2] = player;
        break;
    case 4:
        matrix[1][0] = player;
        break;
    case 5:
        matrix[1][1] = player;
        break;
    case 6:
        matrix[1][2] = player;
        break;
    case 7:
        matrix[2][0] = player;
        break;
    case 8:
        matrix[2][1] = player;
        break;
    case 9:
        matrix[2][2] = player;
        break;

    default:
        break;
    }
    TogglePlayer();
}

bool isEnd()
{
    int xCount = 0;
    int oCount = 0;

    // rows checking
    for (int i = 0; i < 3; i++)
    {
        xCount = 0;
        oCount = 0;
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 'X')
            {
                xCount++;
            }
            else if (matrix[i][j] == 'O')
            {
                oCount++;
            }
        }

        if (xCount == 3)
        {
            cout << "X is win the game !!" << endl;
            return false;
        }
        else if (oCount == 3)
        {
            cout << "O is win the game !!" << endl;
            return false;
        }
    }

    // columns checking
    for (int i = 0; i < 3; i++)
    {
        xCount = 0;
        oCount = 0;
        for (int j = 0; j < 3; j++)
        {
            if (matrix[j][i] == 'X')
            {
                xCount++;
            }
            else if (matrix[j][i] == 'O')
            {
                oCount++;
            }
        }

        if (xCount == 3)
        {
            cout << "X is win the game !!" << endl;
            return false;
        }
        else if (oCount == 3)
        {
            cout << "O is win the game !!" << endl;
            return false;
        }
    }

    // Right cross checking
    xCount = 0;
    oCount = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((i == 0 && j == 2) || (i == 1 && j == 1) || (i == 2 && j == 0))
            {
                if (matrix[i][j] == 'X')
                {
                    xCount++;
                }
                else if (matrix[i][j] == 'O')
                {
                    oCount++;
                }
            }
        }
        if (xCount == 3)
        {
            cout << "X is win the game !!" << endl;
            return false;
        }
        else if (oCount == 3)
        {
            cout << "O is win the game !!" << endl;
            return false;
        }
    }

    xCount = 0;
    oCount = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((i == 0 && j == 0) || (i == 1 && j == 1) || (i == 2 && j == 2))
            {
                if (matrix[i][j] == 'X')
                {
                    xCount++;
                }
                else if (matrix[i][j] == 'O')
                {
                    oCount++;
                }
            }
        }
        if (xCount == 3)
        {
            cout << "X is win the game !!" << endl;
            return false;
        }
        else if (oCount == 3)
        {
            cout << "O is win the game !!" << endl;
            return false;
        }
    }
    return true;
}
