#include "iostream"

using namespace std;

int hyphenCounter(string productCode)
{
    int numHyphen = 0;
    for (int i = 0; i < productCode.length(); i++)
    {
        if (productCode[i] == '-')
        {
            numHyphen++;
        }
    }
    return numHyphen;
}

int digitCounter(string productCode)
{
    int numDigit = 0;
    for (int i = 0; i < productCode.length(); i++)
    {
        if ((productCode[i] >= 48) && (productCode[i] <= 57))
        {
            numDigit++;
        }
    }
    return numDigit;
}

bool validateLastMayus(string productCode)
{
    int lastPosition = productCode.length() - 1;
    if ((productCode[lastPosition] >= 65) && (productCode[lastPosition] <= 90))
    {
        return 1;
    }
    else{
        return 0;
    }
}

void requireCode()
{
    string productCode;
    cout << "Ingresa el codigo: ";
    getline(cin, productCode);

    if (validateLastMayus(productCode))
    {
        cout << "El codigo contiene: \n"
             << hyphenCounter(productCode) << " guiones. \n"
             << digitCounter(productCode) << "digitos.\n";
             
            cout << "ok";
    }
    else
    {
        cout << "Error, el codigo debe terminar con una mayuscula :(";
    }
}
int main()
{

    requireCode();
    return 0;
}