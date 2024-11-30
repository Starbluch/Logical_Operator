#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    double Length , Width , Height , Volume;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 13);
    cout << "Length(cm) ->\t";
    SetConsoleTextAttribute(hConsole, 4);
    cin >> Length;
    SetConsoleTextAttribute(hConsole, 13);
    cout << "Width(cm)  ->\t";
    SetConsoleTextAttribute(hConsole, 4);
    cin >> Width;
    SetConsoleTextAttribute(hConsole, 13);
    cout << "Height(cm) ->\t";
    SetConsoleTextAttribute(hConsole, 4);
    cin >> Height;
    SetConsoleTextAttribute(hConsole, 7);

    Volume = Length * Width * Height;
    SetConsoleTextAttribute(hConsole, 13);
    cout << "Volume(cm) ->\t";
    SetConsoleTextAttribute(hConsole, 4);
    cout << Volume << endl;
    SetConsoleTextAttribute(hConsole, 7);
    return 0;
}