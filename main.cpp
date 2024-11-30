#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int years;

    cout << "Enter years: ";
    cin >> years;

    if ( years % 4 == 0 )
    {
        cout << "366" << endl;
    }
    else
    {
        cout << "365" << endl;
    }
    return 0;
}

