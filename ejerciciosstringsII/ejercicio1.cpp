#include "iostream"

using namespace std;

bool validateLeng(string password)
{
    if (password.size() >= 8)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool validateMayus(string password)
{
    for (int i = 0; i < password.size(); i++)
    {
        char c = password[i];

        if ('A' <= c <= 'Z')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

bool validateMinus(string password)
{
    for (int i = 0; i < password.size(); i++)
    {
        char c = i;
        if ('a' <= c <= 'z')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

bool validateSpecialChars(string password)
{
    int numChars = 0;
    for (int i = 0; i < password.size(); i++)
    {

        char c = i;
        if (33 <= c <= 64)
        {
            numChars++;
        }
    }
    if (numChars >= 3)
    {
        return true;
    }
    else{
        return false;
    }
}

void validatePassword()
{
    string password;
    cout << "ingresa tu contraseña, minimo :\n - 8 caracteres\n - 3 caracteres especiales\n - 1 mayuscula\n - 1 minuscula\n";
    cin >> password;

    if (validateLeng(password))
    {
        if (validateMayus(password))
        {
            if (validateMinus(password))
            {
                if(validateSpecialChars(password)){
                    cout << "Tu contraseña cumple con los requisitos :)";
                }
            }
            else
            {
                cout << "Tu password no contiene almenos una minuscula :(";
            }
        }
        else
        {
            cout << "Tu password no contiene almenos una mayuscula :(";
        }
    }
    else
    {
        cout << "Tu password no contiene almenos 8 caracteres :(";
    }
}
int main()
{
    validatePassword();
    return 0;
}

