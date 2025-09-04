#include <iostream>
using namespace std;

int sumOperation(int num1, int num2)
{
    int result = num1 + num2;
    return result;
}

int subOperation(int num1, int num2)
{
    int result = num1 - num2;
    return result;
}

int multiplyOperation(int num1, int num2)
{
    int result = num1 * num2;
    return result;
}

int divisionOperation(int num1, int num2)
{
    int result = num1 / num2;
    return result;
}

int moduleOperation(int num1, int num2)
{
    int result = num1 % num2;
    return result;
}

int main()
{
    int num1, num2, result;
    char operation;

    cout << "dame un numero ";
    cin >> num1;
    cout << "dame otro numero ";
    cin >> num2;
    cout << " Que operacion quieres hacer? (+, -, *, /, %): ";
    cin >> operation;
    switch (operation)
    {
    case '+':
        result = sumOperation(num1, num2);
        cout << "El resultado es: " << result << "\n";
        break;
    case '-':
        result = subOperation(num1, num2);
        cout << "El resultado es: " << result << "\n";
        break;
    case '*':
        result = multiplyOperation(num1, num2);
        cout << "El resultado es: " << result << "\n";
        break;
    case '/':
        result = divisionOperation(num1, num2);
        cout << "El resultado es: " << result << "\n";
        break;
    case '%':
        result = moduleOperation(num1, num2);
        cout << "El resultado es: " << result << "\n";
        break;

    default:
        break;
    }

    return 0;
}