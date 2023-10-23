#include <iostream>
#include <Windows.h>
using namespace std;

enum Direction
{
    Left = 1,
    Right = 2,
    Up = 3,
    Down = 4
};
struct SnakeBody
{
    int x;
    int y;
    Direction dir;
    char type;
};

string status;
char corner = 'X';
char fruit = 212;
char snakeChar = 219;
const int width = 80;
const int height = 20;
const int snakeLength = 500;
int currentTail = 0;
char Scane[width][height];
char keys[256];
SnakeBody snakeTail[snakeLength];
bool isPlay = true;
int score = 0;

enum COLOR
{
    COLOR_BLACK = 0,
    COLOR_DARKBLUE = 1,
    COLOR_DARKGREEN = 2,
    COLOR_AQUA = 3,
    COLOR_BROWN = 4,
    COLOR_DARKPURPLE = 5,
    COLOR_LIGHTBROWN = 6,
    COLOR_GRAY = 7,
    COLOR_DARKGRAY = 8,
    COLOR_BLUE = 9,
    COLOR_GREEN = 10,
    COLOR_LIGHTBLUE = 11,
    COLOR_RED = 12,
    COLOR_PURPLE = 13,
    COLOR_YELLOW = 14,
    COLOR_WHITE = 15
};
void setColor(COLOR background, COLOR color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), background * 16 + color);
}

void resetColor()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_BLACK * 16 + COLOR_WHITE);
}

void readKeys(char *keys)
{
    for (int i = 0; i < 256; i++)
    {
        keys[i] = (char)(GetAsyncKeyState(i) >> 8);
    }
}
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void hideCursor()
{
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = false;
    SetConsoleCursorInfo(out, &cursorInfo);
}
void genereteFruit()
{
    while (true)
    {
        int fruitX = rand() % width;
        int fruitY = rand() % height;

        if (Scane[fruitX][fruitY] == ' ')
        {
            Scane[fruitX][fruitY] = fruit;
            break;
        }
    }
}
void checkFruit()
{
    int fruitCount = 0;
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            if (Scane[x][y] == fruit)
            {
                fruitCount++;
                break;
            }
        }
        if (fruitCount != 0)
        {
            break;
        }
    }
    if (fruitCount == 0)
    {
        genereteFruit();
    }
}
void drawScane()
{
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            cout << Scane[x][y];
        }
        cout << endl;
    }
}
void cleanScane()
{
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            if (Scane[x][y] == fruit)
            {
                continue;
            }

            Scane[x][y] = ' ';
        }
    }
}
void createCorners()
{
    for (int x = 0; x < width; x++)
    {
        Scane[x][0] = corner;
        Scane[x][height - 1] = corner;
    }
    for (int y = 0; y < height; y++)
    {
        Scane[0][y] = corner;
        Scane[width - 1][y] = corner;
    }
}

void growSnake()
{
    if (currentTail == snakeLength)
    {
        return;
    }
    int x = snakeTail[currentTail - 1].x;
    int y = snakeTail[currentTail - 1].y;
    Direction dir = snakeTail[currentTail - 1].dir;
    int type = snakeTail[currentTail - 1].type;

    switch (snakeTail[currentTail - 1].dir)
    {
    case Right:
        x--;
        break;
    case Left:
        x++;
        break;
    case Up:
        y++;
        break;
    case Down:
        y--;
        break;
    };
    snakeTail[currentTail].x = x;
    snakeTail[currentTail].y = y;
    snakeTail[currentTail].type = type;
    snakeTail[currentTail].dir = dir;
    currentTail++;
}
void genereteSnake()
{
    currentTail = 1;
    snakeTail[0].x = 20;
    snakeTail[0].y = 10;
    snakeTail[0].dir = Right;
    snakeTail[0].type = snakeChar;

    growSnake();
    growSnake();
}
void drawSnake()
{
    for (int i = 0; i < currentTail; i++)
    {
        int x = snakeTail[i].x;
        int y = snakeTail[i].y;
        if (Scane[x][y] == corner || Scane[x][y] == snakeChar)
        {
            isPlay = false;
            status = "GAME OVER!!";
            break;
        }

        if (Scane[x][y] == fruit)
        {
            score += 10;
            growSnake();
        }
        Scane[x][y] = snakeTail[i].type;
    }
}
void snakeAnimation()
{
    for (int i = 0; i < currentTail; i++)
    {
        switch (snakeTail[i].dir)
        {
        case Right:
            snakeTail[i].x++;
            break;
        case Left:
            snakeTail[i].x--;
            break;
        case Up:
            snakeTail[i].y--;
            break;
        case Down:
            snakeTail[i].y++;
            break;
        }
    }
    for (int i = currentTail - 1; i > 0; i--)
    {
        snakeTail[i].dir = snakeTail[i - 1].dir;
    }
}

void controlKeys()
{
    readKeys(keys);
    if (keys['A'] != 0)
    {
        snakeTail[0].dir = Left;
    }

    if (keys['D'] != 0)
    {
        snakeTail[0].dir = Right;
    }

    if (keys['W'] != 0)
    {
        snakeTail[0].dir = Up;
    }

    if (keys['S'] != 0)
    {
        snakeTail[0].dir = Down;
    }

    if (keys['P'] != 0)
    {
        growSnake();
    }

    if (keys['E'] != 0)
    {
        isPlay = false;
    }
}

int main()
{
    system("cls");
    hideCursor();
    genereteSnake();
    while (isPlay)
    {
        setColor(COLOR_BROWN, COLOR_YELLOW);
        cleanScane();
        createCorners();
        controlKeys();
        drawSnake();

        snakeAnimation();
        gotoxy(0, 0);
        checkFruit();
        drawScane();
        Sleep(10);

        cout << endl;
        cout << "Score :" << score << endl;
        cout << "If you want to exit press 'E'" << endl;
    }

    cout << status << endl;

    resetColor();
    cin.get();
}
