#include "iostream"
using namespace std;

string changeMayusToMinus(string palabra)
{
    char c;
    string textMinus;

    for (int i = 0; i < palabra.length(); i++)
    {
        c = palabra[i];

        if (c >= 65 && c <= 90)
        {
            textMinus[i] = c + 32;
        }

        else
        {
            textMinus[i] = c;
        }
    }
    cout << palabra;
    cout << textMinus;

    return textMinus;
}


int counterVowels(string prhase)
{
    char c;
    int counter = 0;
    for (int i = 0; i < prhase.length(); i++)
    {
        c = prhase[i];
        if ((c > 'a') && (c > 'z'))
            if ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'))
            {
                counter++;
            }
    }

    return counter;
}

int counterConsonants(string prhase)
{
    char c;
    for (int i = 0; i < prhase.length(); i++)
    {
        c = prhase[i];

        if ((c != 'a') && (c != 'e') && (c != 'i') && (c != 'o') && (c != 'u'))
        {
            c++;
        }
    }

    return 0;
}
void totalVowelsAndConsonants()
{
    string texto = "Desarrollo de Software";
    string textMinus;

    int numVowels, numConsonats;

    textMinus = changeMayusToMinus(texto);
  /* numConsonats = counterConsonants(textMinus);
    numVowels = counterVowels(textMinus);

    cout << "El texto contiene: \n"
         << numConsonats << "consonantes.\n"
         << numVowels << " vocales.";*/
}
int main()
{
    totalVowelsAndConsonants();
    return 0;
}