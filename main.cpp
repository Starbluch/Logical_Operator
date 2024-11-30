#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    double radius,volume,pi;
    pi = 3.14;

    cout << "Calculation of the volume of the cooler.\n";
    cout << "radius: ";
    cin >> radius;

    volume = (4.0 / 3.0) * pi * pow(radius, 3);

    cout << "Coolet volume: " << volume << " kb.cm\n";

    return 0;
}