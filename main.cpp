#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    int grn, kop;
    cout << "grn: ";
    cin >> grn;
    cout << "kop: ";
    cin >> kop;
    if (kop>=99)
    {
        grn += kop / 100;
        kop = kop % 100;
        cout << grn << " grn " << kop << " kop " << endl;
    }
    else
    {
        cout << grn << " grn " << kop << " kop " << endl;
    }
    return 0;
}