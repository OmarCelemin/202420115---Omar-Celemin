#include <iostream>

using namespace std;

void mayor(int firtsNumber, int secondNumber)
{
    if (firtsNumber > secondNumber)
    {
        cout << secondNumber << ","<< firtsNumber << "\n";
    }

}

int main()
{
    int firtsNumber, secondNumber, result;
    cout << "Ingrese el primer numero: ";
    cin >> firtsNumber;
    cout << "Ingrese el segundo numero: ";
    cin >> secondNumber;
    return 0;
}