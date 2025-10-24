#include <iostream>

using namespace std;

bool digitVerification(string accessCode)
{
    for (int i = 0; i < accessCode.length(); i++)
    {
        if ((accessCode[i] >= 48) && (accessCode[i] <= 57))
        {
            return 1;
        }
    }
    return 0;
}

bool specialsymbolVerification(string accessCode)
{
    for (int i = 0; i < accessCode.length(); i++)
    {
        if ((accessCode[i] >= 33) && (accessCode[i] <= 47) || (accessCode[i] >= 58) && (accessCode[i] <= 64))
        {
            return 1;
        }
    }
    return 0;
}

bool noSpacesVerification(string accessCode)
{
    for (int i = 0; i < accessCode.length(); i++)
    {
        if (accessCode[i] == ' ')
        {
            return 1;
        }
    }
    return 0;
}

void checkAccessCode()
{
    string accessCode;
    cout << "Ingresa el codigo de acceso: ";
    getline(cin, accessCode);

    if (!digitVerification(accessCode))
    {
        cout << "El codigo no contiene minimo un digito, no es valido :(\n";
    }
    if (!specialsymbolVerification(accessCode))
    {
        cout << "El codigo no contiene minimo un caracter especial, no es valido :(\n";
    }
    if (noSpacesVerification(accessCode))
    {
        cout << "El codigo no puede contener espacios, no es valido :(\n";
    }

}

int main()
{
    checkAccessCode();
    return 0;
}