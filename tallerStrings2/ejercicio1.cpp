#include "iostream"
using namespace std;

bool validateLength(string userName)
{
    if ((userName.length() >= 6) && (userName.length() <= 12))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool validatebeginningLetter(string userName)
{
    if (((userName[0] >= 'A') && (userName[0] <= 'Z')) || ((userName[0] >= 'a') && (userName[0] <= 'z')))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool validateNoSpaces(string userName)
{
    for (int i = 0; i < userName.length(); i++)
    {
        if (userName[i] == ' ')
        {
            return 0;
        }
    }
    return 1;
}

void requireUserName()
{
    string userName;
    cout << "Ingresa tu nombre de usuario, debe tener entre 6 y 12 caracteres, empezar con una letra, y no puede contener espacios.";
    getline(cin, userName);
    if (validatebeginningLetter(userName) && validateNoSpaces(userName) && validateLength(userName))
    {
        cout << "vale :)";
    }
    else
    {
        cout << "Error, no cumples con alguno de los requisitos :(";
    }
}
int main()
{
    requireUserName();
    return 0;
}