#include <iostream>
#include <curses.h>

using namespace std;

const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection
{
    STOP = 0,
    LEFT,
    RIGHT,
    UP,
    DOWN
};
eDirection dir;
bool gameOver;

void Setup()
{
    gameOver = false;
    dir = STOP;

    x = width / 2;
    y = height / 2;

    fruitX = rand() % width;
    fruitY = rand() % width;
    score = 0;
}

void Draw()
{
    system("clear");
    for (int i = 0; i < width; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0 || j == width - 1)
            {
                cout << "#";
            }
            else
            {
                if (i == y && j == x)
                {
                    cout << "O";
                }
                else if (i == fruitY && j == fruitX)
                {
                    cout << "F";
                }
                else
                    cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < width; i++)
        cout << "#";
    cout << endl;
}

void Input()
{
    initscr();

    nodelay(stdscr, TRUE);

    int ch;
    ch = getch();
    if (ch != ERR)
    {
        switch (ch)
        {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'x':
            gameOver = true;
            break;
        }
    }
}

void Logic()
{
    switch (dir)
    {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;

    default:
        break;
    }
}

int main()
{
    Setup();
    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
    }
}