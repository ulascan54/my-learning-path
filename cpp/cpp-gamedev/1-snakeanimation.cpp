#include <iostream>
#include <Windows.h>

using namespace std;
const int width=80;
const int height=20;
char Scane[width][height];
void gotoxy(int x, int y){
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void hideCursor(){
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO cursorInfo;

    GetConsoleCursorInfo(out,&cursorInfo);
    cursorInfo.bVisible=false;
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

int main()
{
    system("cls");
    hideCursor();
    int i=0;
    while (true)
    {
        cleanScane();
        createCorners();
        Scane[20+i][10]='a';
        gotoxy(0,0);
        drawScane();
        Sleep(50);
        i++;
    }
    

    cin.get();
    
    
}
