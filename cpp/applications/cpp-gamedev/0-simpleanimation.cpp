#include <iostream>
#include <Windows.h>

using namespace std;
const int witdh=80;
const int height=20;
void gotoxy(int x, int y){
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main()
{
    system("cls");
    for (int i = 0; i < witdh; i++)
    {
        cout << "a";

        Sleep(30);
    }
    for (int i = 0; i < height; i++)
    {
        gotoxy(witdh-1,i);
        cout << "a";
        Sleep(30);
    }
    for (int i = 0; i < witdh; i++)
    {
        gotoxy(witdh-1-i,height);

        cout << "a";

        Sleep(30);
    }
    for (int i = 0; i < height; i++)
    {
        gotoxy(0,height-i);

        cout << "a";

        Sleep(30);
    }
    cin.get();
    
    
}
