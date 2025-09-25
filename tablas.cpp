#include <stdio.h>

using namespace std;

int calculateTotal(int hours, int rate)
{
    int total;
    total = hours * rate;
    return total;
}

void printlnVoice(int hours, int rate, string plate)
{
    int total;
    total = calculateTotal(hours, rate);
    cout << "Vehiculo: " << plate << "Horas: " << hours << "Tarifa: " << "Total: " << total << "\n";
    
    }

    int main()
    {
        string plate;
        int hours, rate;
        cout << "ingrese las horas de estacionamieto.";
        cin >> hours;
        cout << "ingrese la tarifa por hora.";
        cin >> rate;
        cout << "ingrese la placa del vehiculo";
        cin >> plate;
        calculateTotal(hours, rate);
        printlnVoice(hours, rate, plate);

        return 0;
    }