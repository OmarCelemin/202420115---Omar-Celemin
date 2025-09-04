#include <iostream>
using namespace std;

void aprobo()
{
    cout << "Has aprobado :)\n";
}

void reprobo()
{
    cout << "Desaprobado :(\n";
}
int main()
{
    double nota;
    cout << "dame el valor de tu nota ";
    cin >> nota;

    if (nota >= 3)
    {
        aprobo();
    }
    else
    {
        reprobo();
    }

    return 0;
}