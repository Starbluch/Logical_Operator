#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    int god , cek;
    int cek_const = 28800;

    cout << "cek: ";
    cin >> cek;
    if (cek >= cek_const)
    {
        cout << "The working day is over!" << endl;
        return 0;
    }

    cek = cek_const - cek;
    god = (cek / 60) / 60;
    
    
    cout << "End of the working day in:" << god << endl;
    return 0;
}