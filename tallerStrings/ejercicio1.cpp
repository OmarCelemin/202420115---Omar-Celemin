#include <iostream>
using namespace std;

void readString()
{
    char string[20];
    char consonants[20];
    int k = 0;

    cout << "Dame una palabra: ";
    cin >> string;

    for (int i = 0; i < 20 && string[i] != '\0'; i++)
    {
        if ((string[i] != 'a') && (string[i] != 'e') && (string[i] != 'i') && (string[i] != 'o') && (string[i] != 'u'))
        {
            consonants[k] = string[i];
            k++;
        }
    }
    cout << "\nConsonantes de la palabra: " << consonants << "\n";
}

int main()
{
    readString();
    return 0;
}

