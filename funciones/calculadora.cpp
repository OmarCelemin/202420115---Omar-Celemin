#include <iostream>
using namespace std;

int sumNumbers(int a, int b)
{
    int result;
    result = a + b;
    return result;
}

int subNumbers(int a, int b)
{
    int result;
    result = a - b;
    return result;
}

int multiplyNumbers(int a, int b)
{
    int result;
    result = a * b;
    return result;
}

double divideNumbers(double a, double b)
{
    double result;
    result = a / b;
    return result;
}

int main()
{

    int num1, num2;
    double result;
    char operation;

    cout << " Qué operacion quieres hacer? (+, -, *, /) :) ";
    cin >> operation;
    cout << "dame un número ";
    cin >> num1;
    cout << "dame otro número ";
    cin >> num2;

    switch (operation)
    {
    case '+':
        result = sumNumbers(num1, num2);
        cout << "El resultado es: " << result << "\n";
        break;
    case '-':
        result = subNumbers(num1, num2);
        cout << "El resultado es: " << result << "\n";
        break;
    case '*':
        result = multiplyNumbers(num1, num2);
        cout << "El resultado es: " << result << "\n";
        break;
    case '/':
        if (num2 == 0)
        {
            cout << "No se puede dividir entre 0 \n";
            break;
        }
        else
        {

            result = divideNumbers(num1, num2);
            cout << "El resultado es: " << result << "\n";
        }
        break;
    }
    return 0;
}