#include <iostream>

using namespace std;

void mostrarTabla(int number)
{
    int limit = 10;
    int result;
    cout << "\nTabla de multiplicar del " << number << "\n\n";

    for (int i = 0; i <= limit; i++)
    {
        result = number * i;
        cout << number << " x " << i << " = " << result << "\n";
    }
    cout << "\n";
}
int main()
{
    int number;
    cout << "Ingrese un numero entero:";
    cin >> number;
    mostrarTabla(number);
    return 0;
}