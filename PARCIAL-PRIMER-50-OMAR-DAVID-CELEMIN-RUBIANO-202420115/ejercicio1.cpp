#include <iostream>

using namespace std;

void checkpackages(int packageNum)
{
    if (packageNum % 2 == 0)
    {
        cout << "Paquetes revisados con exito: ";
        for (int i = 2; i <= packageNum; i += 2)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << "Paquetes revisados con exito: ";
        for (int i = 1; i <= packageNum; i += 2)
        {
            cout << i << " ";
        }
        
    }
}

int main()
{
    int packageNum;
    cout << "Ingrese el numero de paquetes a revisar:  ";
    cin >> packageNum;
    checkpackages(packageNum);
    return 0
}