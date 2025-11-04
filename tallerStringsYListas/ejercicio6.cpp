#include "iostream"
using namespace std;

void productosPrecios()
{
    string productos[6] = {"Manzanas", "Peras", "Uvas", "Bananas", "Mangos", "Fresas"};
    float precios[6] = {1500, 2300, 1800, 3100, 2700, 2600};
    float total = 0;
    cout << "A continuacion los productos con sus precios: ";
    for (int i = 0; i < 6; i++)
    {
        cout << productos[i] << " " << precios[i] << "\n";
        total += precios[i];

       
        
    }
    cout << "\nEl total de los precios es: " << total << "\n";

    cout << " los productos con precios mayores a 2500 son: \n";

    for (int i = 0; i < 6; i++)
    {
        if (precios[i] >= 2500)
        {
            cout << productos[i]<< "\n";
        }
        
    }
}

int main()
{
    productosPrecios();
    return 0;
}