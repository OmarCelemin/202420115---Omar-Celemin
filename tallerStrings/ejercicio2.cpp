#include <iostream>
using namespace std;

void changeMayusToMinus()
{
    char palabra[20];
    char result[20];

    cout << "Ingresa una palabra (sin espacios): ";
    cin >> palabra;

    for (int i = 0; palabra[i]; i++)
    {
        char c = palabra[i];

        if (i % 2 == 0)
        {
            if (c >= 65 && c <= 90)
                result[i] = c + 32;
            else
                result[i] = c;
        }
        else
        {
            if (c >= 97 && c <= 122)
                result[i] = c - 32;
            else
                result[i] = c;
        }
    }

    cout << "Resultado: " << result;
}

int main()
{
    changeMayusToMinus();
    return 0;
}
