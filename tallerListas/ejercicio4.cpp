#include "iostream"
using namespace std;

void isPair()
{
    int values[8] = {2, 5, 7, 8, 10, 13, 16, 19};
    int val;
    int numPairs = 0;
    for (int i = 0; i < 8; i++)
    {
        val = values[i];

        if (!(val % 2))
        {
            numPairs++;
        }
    }

    cout << "La lista contiene: " << numPairs << " numeros pares \n";
}

int main()
{
    isPair();
    return 0;
}