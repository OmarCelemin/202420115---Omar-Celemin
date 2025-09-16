#include <iostream>

using namespace std;

void clasificarNumero(int number)
{
    if (number > 0)
    {
        cout << "El numero es positivo." << "\n";
    }
    else if (number < 0)
    {
        cout << "El numero es negativo." << "\n";
    }
    else
    {
        cout << "El numero es cero." << "\n";
    }
}
int main()
{
    int number;
    cout << "Ingrese un numero entero: ";
    cin >> number;
    clasificarNumero(number);
    return 0;
}