#include "iostream"
using namespace std;

void counterChar()
{
    string palabra = "Programacion en C++";
    char c;
    int counter = 0;

    for (int i = 0; i < palabra.length(); i++)
    {
        c = palabra[i];
        if (!(c == ' '))
        {
            counter++;
        }
    }

    cout << "El string: " << palabra << " contiene: \n"
         << palabra.length() << " caracteres contando los espacios.\n"
         << counter << " caracteres sin espacios";
}

int main()
{
    counterChar();
    return 0;
}