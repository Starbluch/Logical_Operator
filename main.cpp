#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    int god_1,god_2 , hv , cek_1,cek_2;
    int cek_const = 86400;

    cout << "cek: ";
    cin >> cek_1;
    cek_2 = cek_1;
    
    hv = cek_1 / 60;
    god_1 = hv/60;
    cek_1 = cek_1 % 60;
    hv = hv % 60;

    cout << "The time is now: \t";
    cout << "god: " << god_1;
    cout << "\t hv: " << hv;
    cout << "\t cek: " << cek_1 << endl;
  
    cek_2 = cek_const-cek_2;
    hv = cek_2 / 60;
    god_2 = hv/60;
    cek_2 = cek_2 % 60;
    hv = hv % 60;

    cout << "Time until next day: \t";
    cout << "god: " << god_2;
    cout << "\t hv: " << hv;
    cout << "\t cek: " << cek_2 << endl;

    if (god_1>=12)
    {
        god_1 = god_1 - 12;
        cout << "Time on wristwatch \t";
        cout << god_1;
        cout << ":" << hv;
        cout << ":" << cek_2 << endl;
    }
    
    return 0;
}