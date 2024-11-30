#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    double scale,distanc, dist;
    
    system("cls");
    
    cout << "Payments vary between settlements.\nenter your business details" << endl;
    cout << "Map scale (number of kilometers in one centimeter: ";
    SetConsoleTextAttribute(hConsole, 4);
    cin >> scale;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "Payments vary between settlements: ";
    SetConsoleTextAttribute(hConsole, 4);
    cin >> distanc;
    SetConsoleTextAttribute(hConsole, 7);

    dist = scale * distanc;
    
    cout << "The distance between settlements is: ";
    SetConsoleTextAttribute(hConsole, 4);
    cout << dist;
    SetConsoleTextAttribute(hConsole, 7);
    cout << " km" << endl;
    
    return 0;
}