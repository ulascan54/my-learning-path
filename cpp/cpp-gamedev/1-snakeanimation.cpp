#include <iostream>
#include <Windows.h>


enum Direction {
    Left = 1,
    Right = 2,
    Up = 3,
    Down = 4
};
struct SnakeBody  {
    int x;
    int y;
    Direction dir;
    char type;
};

using namespace std;
const int width=80;
const int height=20;
const int snakeLength = 500;
int currentTail=0;
char Scane[width][height];
char keys[256];
SnakeBody snakeTail[snakeLength];



void readKeys(char *keys){
    for (int i = 0; i < 256; i++)
    {
        keys[i]=(char)(GetAsyncKeyState(i)>>8);
    }
    
}
void gotoxy(int x, int y){
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void hideCursor(){
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO cursorInfo;

    GetConsoleCursorInfo(out ,&cursorInfo);
    cursorInfo.bVisible = false;
    SetConsoleCursorInfo(out, &cursorInfo);
}
void drawScane(){
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            cout << Scane[x][y];
        }
        cout << endl;
    }
}
void cleanScane(){
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            Scane[x][y] = ' ';
        }
    }
}
void createCorners(){
    for (int x = 0; x < width; x++)
    {
        Scane[x][0] = 219;
        Scane[x][height-1]= 219;
        
    }
    for (int y = 0; y < height; y++)
    {
        Scane[0][y] = 219;
        Scane[width-1][y] = 219;
    }
}

void growSnake(){
    if (currentTail == snakeLength)
    {
        return;
    }
    int x = snakeTail[currentTail-1].x;
    int y = snakeTail[currentTail-1].y;
    Direction dir = snakeTail[currentTail-1].dir;
    int type = snakeTail[currentTail-1].type;

    switch(snakeTail[currentTail-1].dir){
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
void genereteSnake(){
    currentTail=1;
    snakeTail[0].x = 20;
    snakeTail[0].y = 10;
    snakeTail[0].dir = Right;
    snakeTail[0].type = 219;

    growSnake();
    growSnake();
}
void drawSnake(){
    for (int i = 0; i < currentTail; i++)
    {
        int x = snakeTail[i].x;
        int y = snakeTail[i].y;
        Scane[x][y]= snakeTail[i].type;
    }   
}
void snakeAnimation(){
    for (int i = 0; i < currentTail; i++)
    {
        switch (snakeTail[i].dir){
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
        snakeTail[i].dir = snakeTail[i-1].dir;

    }

}

void controlKeys(){
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
    
}


int main()
{
    system("cls");
    hideCursor();
    genereteSnake();
    while (true)
    {
        cleanScane();
        createCorners();
        controlKeys();
        drawSnake();
        snakeAnimation();
        gotoxy(0,0);
        drawScane();
        Sleep(10);

    }
    

    cin.get();
    
    
}
