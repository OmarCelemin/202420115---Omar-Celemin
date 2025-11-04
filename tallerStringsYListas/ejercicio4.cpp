#include "iostream"
using namespace std;

void sumTotal()
{

    float precios[6] = {12.5, 8.0, 9.9, 15.3, 11.7, 6.4};
    float a, mayor = 0;
    for (int i = 0; i < 6; i++)
    {
        a += precios[i];
        if (precios[i] > mayor)
        {
            mayor = precios[i];
        }
    }

    cout << "La suma total de los precios es: " << a << "\n";
    cout << "El precio mayor es: " << mayor;
}
int main()
{
    sumTotal();
    return 0;
}