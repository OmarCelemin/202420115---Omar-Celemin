#include <iostream>

using namespace std;

bool requireMaintenance(int sheetsNum, int interval)
{
    if (sheetsNum % interval == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int sheetsNum, interval;
    bool status;

    cout << "ingrese el numero de hojas: ";
    cin >> sheetsNum;
    cout << "Ahora el intervalo: ";
    cin >> interval;
requireMaintenance(sheetsNum, interval)
    status = ;

    if (status)
    {
        cout << "El sistema requiere mantenimiento -_-\n";
    }
    else
    {
        cout << "El sistema todavia no requiere mantenimiento :)\n";
    }
    

    return 0;
}