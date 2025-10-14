#include <iostream>
using namespace std;

void commonLetters()
{
    char string1[50];
    char string2[50];
    int contador = 0, len1, len2;

    cout << "Primera palabra: ";
    cin >> string1;
    cout << "Segunda palabra: ";
    cin >> string2;

     for (int i = 0; string1[i]; i++)
        len1++;

    for (int j = 0; string2[j]; j++)
        len2++;

    for (int i = 0; string1[i] <= len1; i++)
    {
        char c1 = string1[i];
        if (c1 >= 'A' && c1 <= 'Z')
            c1 = c1 + 32;

        for (int j = 0; string2[j] <= len2; j++)
        {
            char c2 = string2[j];
            if (c2 >= 'A' && c2 <= 'Z')
                c2 = c2 + 32;

            if (c1 == c2)
            {
                contador++;
                break;
            }
        }
    }

    cout << "Cantidad de letras que aparecen en ambas palabras: " << contador << endl;
}

int main()
{
    commonLetters();
    return 0;
}

