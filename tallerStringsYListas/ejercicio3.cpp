#include "iostream"
using namespace std;

void calculatePromAge()
{

    int edades[6] = {18, 21, 25, 30, 27, 22};
    float prom = 0;

    cout << "El promedio de las edades: ";

    for (int i = 0; i < 6; i++)
    {
        prom += edades[i];
        cout << edades[i] << ", ";
    }
    prom = prom / 6;
    cout << " es: " << prom << ".\n";
}

int main()
{
    calculatePromAge();
    return 0;
}