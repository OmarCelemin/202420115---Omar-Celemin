#include <iostream>
using namespace std;

string userName;
int yearBorn, currentYear = 2025, userAge;
int main()
{
    cout << "Ingrese su nombre :) ";
    cin >> userName;
    cout << "En que año nació? \n";
    cin >> yearBorn;

    cout << userName << " Su edad es: " << currentYear - yearBorn << "\n";

    return 0;
}

