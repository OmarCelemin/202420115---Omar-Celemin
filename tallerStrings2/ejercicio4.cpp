#include "iostream"

using namespace std;

int wordsCounter(string phrase)
{
    int numWords = 1;

    for (int i = 0; i < phrase.length(); i++)
    {
        if (phrase[i] == ' ')
        {
            numWords++;
        }
    }

    return numWords;
}

int puntuationCounter(string phrase)
{
    int numPuntuation = 0;
    for (int i = 0; i < phrase.length(); i++)
    {
        if ((phrase[i] == '.') || (phrase[i] == ':') || (phrase[i] == ',') || (phrase[i] == ';'))
        {
            numPuntuation++;
        }
    }

    return numPuntuation;
}

bool endPoint(string phrase)
{
    int lastPosition = phrase.length() - 1;

    if (phrase[lastPosition] == '.')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void evaluatePhrase()
{
    string phrase;

    cout << "ingrese la frase a evaluar: ";
    getline(cin, phrase);

    cout << "La frase contiene: \n"
         << puntuationCounter(phrase) << " signos de puntuacion\n"
         << wordsCounter(phrase) << " palabras, ademas ";

    if (endPoint(phrase))
    {
        cout << "la frase termina en punto";
    }
    else
    {
        cout << "la frase no termina en punto";
    }
}

int main()
{

    evaluatePhrase();
    return 0;
}
