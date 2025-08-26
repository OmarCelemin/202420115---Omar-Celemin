#include <iostream>
using namespace std;

char selectOperation;
int val1, val2, sumResult, subsResult, multipyResult, divisionResult, moduleResult;

int main()
{

    cout << "Que operacion deseas hacer suma(+), resta(-), multiplicacion(*), division(/) o hallar el modulo(%) :) ";
    cin >> selectOperation;

    cout << "\n Ingrese el primer valor. ";
    cin >> val1;

    cout << "\n Ingrese el segundo valor valor. ";
    cin >> val2;

    switch (selectOperation)
    {
    case '*':
        multipyResult = val1 * val2;
        cout << "La mutiplicaciom tiene como resultado: " << multipyResult << "\n";
        break;

    case '/':
        divisionResult = val1 / val2;
        cout << "La division tiene como resultado: " << divisionResult << "\n";
        break;

    case '+':
        sumResult = val1 + val2;
        cout << "La suma tiene como resultado: " << sumResult << "\n";
        break;

    case '-':
        subsResult = val1 - val2;
        cout << "La resta tiene como resultado: " << subsResult << "\n";
        break;
    case '%':
        moduleResult = val1 % val2;
        cout << "El modulo tiene como resultado: " << moduleResult << "\n";
        break;

        return 0;
    }
}