#include "iostream"
using namespace std;

void contarPalabras()
{
    string frase, palabra ="", palabraMasLarga =" ";
    char c;
    int couter;

    cout << "Ingrese una frase: ";
    cin >> frase;

    for (int i = 0; i < frase.length(); i++)
    {
        c = frase[i];
        if ((c >= 'a' && c <= 'z') && (c >= 'A' && c <= 'Z'))
        {
            palabra[i] = c;
        }
        if (!(c >= 'a' && c <= 'z') && (c >= 'A' && c <= 'Z') || i == frase.length())
        {
            if(palabra > palabraMasLarga){
                palabraMasLarga = palabra;
            }
        }
        
    }
    cout << "La frase contiene: " << couter << " palabras\n";
    cout << "La palabra mas larga dentro de la frase es: " << palabraMasLarga;
}
int main()
{
    contarPalabras();
    return 0;
}