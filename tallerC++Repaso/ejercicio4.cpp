#include <iostream>

using namespace std;

void contarDesendente(int number)
{
    while (number >= 0)
    {
        cout << number << " ";
        number--;
    }
}

void contarAsendente(int number)
{
    int i = 0;
    while (i <= number)
    {
         cout << i << " ";
        i++;
    }
}

int main()
{
    int number;
    cout << "Ingrese un numero entero: ";
    cin >> number;
    cout << "Contando de forma descendente: " << "\n";
    contarDesendente(number);
    cout << "\n Contando de forma ascendente: " << "\n";
    contarAsendente(number);
    return 0;
}