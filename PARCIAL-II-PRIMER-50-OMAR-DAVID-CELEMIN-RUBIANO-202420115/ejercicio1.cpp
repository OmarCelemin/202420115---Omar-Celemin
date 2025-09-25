#include <iostream>

using namespace std;

int calculateTotal(int hours, int rate)
{
    int total;
    total = hours * rate;
    return total;
}

void printlnVoice(int hours, int rate, int total, string plate)
{

    cout << "Vehiculo: " << plate << " Horas: " << hours << " Tarifa: " << rate << " Total: " << total << "\n";
}

int main()
{
    string plate;
    int hours, rate, total;
    cout << "Ingrese las horas de estacionamiento:";
    cin >> hours;
    cout << "Ingrese la tarifa por hora:";
    cin >> rate;
    cout << "Ingrese la placa del vehiculo:";
    cin >> plate;
    total = calculateTotal(hours, rate);
    printlnVoice(hours, rate, total, plate);

    return 0;
}