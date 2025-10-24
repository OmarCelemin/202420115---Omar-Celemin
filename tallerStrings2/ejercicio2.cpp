#include <iostream>

using namespace std;

int vowelsCounter(string text)
{
    int numVowels = 0;

    for (int i = 0; i < text.length(); i++)
    {
        if ((text[i] >= 65) && (text[i] <= 90))
        {
            text[i] += 32;
        }
        if ((text[i] == 'a') || (text[i] == 'e') || (text[i] == 'i') || (text[i] == 'o') || (text[i] == 'u'))
        {
            numVowels++;
        }
    }
    return numVowels;
}

int consonatsCounter(string text)
{
    int numConsonants = 0;
    for (int i = 0; i < text.length(); i++)
    {
        if ((text[i] >= 65) && (text[i] <= 90))
        {
            text[i] += 32;
        }
        if (((text[i] >= 'a') && (text[i] <= 'z')) && (text[i] != 'a') && (text[i] != 'e') && (text[i] != 'i') && (text[i] != 'o') && (text[i] != 'u'))
        {
            numConsonants++;
        }
    }
    return numConsonants;
}

int noAphabeticCounter(string text)
{
    int numNoAlphabetics = 0;
    for (int i = 0; i < text.length(); i++)
    {
        if (((text[i] >= 65) && (text[i] <= 90)) || ((text[i] >= 97) && (text[i] <= 122)))
        {
        }
        else
        {
            numNoAlphabetics++;
        }
    }

    return numNoAlphabetics;
}

void requireText()
{
    string text;
    cout << "Ingrese el texto a analizar: ";
    getline(cin, text);
    cout << "El texto contiene: \n"
         << vowelsCounter(text) << " vocales.\n"
         << consonatsCounter(text) << " consonantes. \n"
         << noAphabeticCounter(text) << " caracteres no alfabeticos.\n";
}

int main()
{
    requireText();
    return 0;
}