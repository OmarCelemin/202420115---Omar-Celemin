#include <iostream>

using namespace std;

void contarDesendente(int number)
{
    while (number >= 0)
    {
        cout << number << "\n";
        number--;
    }
}

void contarAsendente(int number)
{
    while (number >= 0)
    {
        cout << number << "\n";
        number++;
    }
}

int main()
{
    int number;
    cout << "Ingrese un numero entero: ";
    cin >> number;
    cout << "Contando de forma descendente: " << "\n";
    contarDesendente(number);
    cout << "Contando de forma ascendente: " << "\n";
    contarAsendente(number);
    return 0;
}