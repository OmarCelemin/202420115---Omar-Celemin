#include "iostream"
using namespace std;

void ciudadesRangoTemperatura()
{
    string ciudades[10] = {"Bogota", "Medellin", "Cali", "Cartagena", "Pereira", "Bucaramanga", "Manizales", "Tunja", "Santa Marta", "Villavicencio"};
    float temperatura[10] = {18.5, 25.1, 27.8, 31.3, 22.7, 26.2, 19.0, 16.4, 30.5, 29.0};
    float rangoMax, rangoMin, temp, prom = 0;
    int couter = 0;

    cout << "Dame el rango maximo de temperatura: ";
    cin >> rangoMax;

    cout << "Dame el rango minimo de temperatura: ";
    cin >> rangoMin;

    cout << "Las ciudades que se encuentran entre el rango de temperatura son:\n";
    for (int i = 0; i < 10; i++)
    {
        temp = temperatura[i];

        if ((temp <= rangoMax) && (temp >= rangoMin))
        {
            prom += temperatura[i];
            cout << ciudades[i] << " - " << temperatura[i] << "°c\n";
            couter++;
        }
    }

    prom = prom/couter;

    cout << "\nEl promedio de temperatura de estas ciudades es: " << prom << "°c\n";
}
int main()
{
    ciudadesRangoTemperatura();
    return 0;
}