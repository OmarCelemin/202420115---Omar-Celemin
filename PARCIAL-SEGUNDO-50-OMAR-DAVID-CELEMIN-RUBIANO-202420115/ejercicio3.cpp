#include "iostream"
using namespace std;

void multasPorCiudad()
{
    string placas[6] = {"ABC123", "XYZ789", "LMN456", "JLK321", "QWE654", "TYU999"};
    float multas[6] = {250000, 180000, 300000, 450000, 200000, 120000};
    string ciudades[6] = {"Tunja", "Bogota", "Tunja", "Medellin", "Cali", "Tunja"};
    string ask;
    string ciudad;

    cout << "Ingrese la ciudad a consultar: ";
    cin >> ask;

    cout << "Multas registradas en: " << ask << "\n";
    for (int i = 0; i < 6; i++)
    {
        ciudad = ciudades[i];

        if (ciudad == ask)
        {
            cout << placas[i] << " " << multas[i] << "\n";
        }
    }
}

int main()
{
    multasPorCiudad();
    return 0;
}