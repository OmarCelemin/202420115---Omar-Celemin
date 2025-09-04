#include <iostream>
using namespace std;

int numplayer2, numberselected;

int main()
{
    cout << "dame un numero ";
    cin >> numplayer2;
    cout << "debes adivinar un numero ";
    cin >> numberselected;

    while (numplayer2 != numberselected)
    {
        if (numberselected < numplayer2)
        {
            cout << "\n el numero es mayor intentalo de nuevo :( ";
            cin >> numberselected;
        }
        else
        {
            cout << "\n el numero es menor intentalo de nuevo :( ";
            cin >> numberselected;
        }
    }
    cout << "Correcto el numero a adivinar era el " << numplayer2 << " :)\n";

    return 0;
}