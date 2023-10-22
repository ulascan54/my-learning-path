#include <iostream>
#include <Windows.h>


using namespace std;

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

void setColor(COLOR background, COLOR color){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),background*16+color);
}

int main()
{

    for (int i = 0; i < 256; i++)
    {
        setColor(COLOR_WHITE,COLOR_GREEN);
        cout << i << endl;
    }
    
    
    return 0;
}
