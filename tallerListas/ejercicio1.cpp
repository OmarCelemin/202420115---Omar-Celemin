#include "iostream"
using namespace std;

void employeesName()
{
    string employees[4] = {"Ana", "Luis", "María", "Pedro"};

    for (int i = 0; i < 4; i++)
    {
        string name = employees[i];

        cout << "El nombre del empleado en la posicion " << i << " es: " << name << "\n";
    }
}

int main()
{
    employeesName();
    return 0;
}