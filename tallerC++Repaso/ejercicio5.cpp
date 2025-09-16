#include <iostream>

using namespace std;

int mayor (int firtsNumber, int secondNumber)
{
    if (firtsNumber > secondNumber)
    {
        return firtsNumber;
    }
    else
    {
        return secondNumber;
    }
}

int main()
{
    int firtsNumber, secondNumber, result;
    cout << "Ingrese el primer numero: ";
    cin >> firtsNumber;
    cout << "Ingrese el segundo numero: ";
    cin >> secondNumber;
    result = mayor(firtsNumber, secondNumber);
    cout << "El numero mayor es: " << result << "\n";
    return 0;

}