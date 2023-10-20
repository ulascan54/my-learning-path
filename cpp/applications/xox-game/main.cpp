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
    int n = 0;
    cout << "Welcome to Tic Tac Toe" << endl;
    Draw();
    while (game)
    {
        Input();
        TogglePlayer();
        Draw();
        game = isEnd();
        n++;
        if (n == 9)
        {
            cout << "It is a draw !" << endl;
            game = false;
        }
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
    cout << "It's '" << player << "' turn. "
         << "Enter the number of fields:" << endl;
    cin >> a;

    switch (a)
    {
    case 1:
        if (matrix[0][0] == '1')
        {
            matrix[0][0] = player;
            break;
        }
        else
        {
            cout << "This field is already using." << endl;
            Input();
        }
        break;

    case 2:
        if (matrix[0][1] == '2')
        {
            matrix[0][1] = player;
            break;
        }
        else
        {
            cout << "This field is already using." << endl;
            Input();
        }

        break;
    case 3:
        if (matrix[0][2] == '3')
        {
            matrix[0][2] = player;
            break;
        }
        else
        {
            cout << "This field is already using." << endl;
            Input();
        }

        break;
    case 4:
        if (matrix[1][0] == '4')
        {
            matrix[1][0] = player;
            break;
        }
        else
        {
            cout << "This field is already using." << endl;
            Input();
        }

        break;
    case 5:
        if (matrix[1][1] == '5')
        {
            matrix[1][1] = player;
            break;
        }
        else
        {
            cout << "This field is already using." << endl;
            Input();
        }

        break;
    case 6:
        if (matrix[1][2] == '6')
        {
            matrix[1][2] = player;
            break;
        }
        else
        {
            cout << "This field is already using." << endl;
            Input();
        }

        break;
    case 7:
        if (matrix[2][0] == '7')
        {
            matrix[2][0] = player;
            break;
        }
        else
        {
            cout << "This field is already using." << endl;
            Input();
        }

        break;
    case 8:
        if (matrix[2][1] == '8')
        {
            matrix[2][1] = player;
            break;
        }
        else
        {
            cout << "This field is already using." << endl;
            Input();
        }

        break;
    case 9:
        if (matrix[2][2] == '9')
        {
            matrix[2][2] = player;
            break;
        }
        else
        {
            cout << "This field is already using." << endl;
            Input();
        }

        break;

    default:
        break;
    }
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

    // Left cross checking

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
