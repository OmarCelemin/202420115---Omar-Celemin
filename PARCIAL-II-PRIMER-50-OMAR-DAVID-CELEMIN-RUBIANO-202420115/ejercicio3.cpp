#include <iostream>

using namespace std;

bool isValidAmount(int amount)
{
    if (amount % 50 == 0)
    {
        return true;
    }

    else
    {
        return false;
    }
}

void dispenceBills(int amount)
{
    int billsOf100 = 0, billsOf50 = 0, billsOf200 = 0;

    while (amount > 0)
    {
        if (amount >= 200)
        {
            billsOf200++;
            amount -= 200;
        }
        else if (amount >= 100)
        {
            billsOf100++;
            amount -= 100;
        }
        else if (amount >= 50)
        {
            billsOf50++;
            amount -= 50;
        }
    }

    cout << "Se han dispensado: " << billsOf200 << " billetes de 200, " << billsOf100 << " billetes de 100 y " << billsOf50 << " billetes de 50.\n";
}
int main()
{
    int amount;
    bool valid;
    cout << "Ingrese la cantidad a retirar (multiplo de 50): ";
    cin >> amount;
    valid = isValidAmount(amount);
    if (valid)
    {
        dispenceBills(amount);
    }
    else
    {
        cout << "Cantidad invalida, debe ser un multiplo de 50.\n";
    }
    return 0;
}
