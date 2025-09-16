#include <iostream>

using namespace std;

void checkTurn(int start, int end)
{
    if (start < end)
    {
        cout << "La maquina opero durante los turnos: ";
        for (int i = start; i <= end; i++)
        {
            cout << i << ", ";
        }
        cout <<":)\n";
    }
    else
    {
        cout << "Error parametros mal ingresados el turno de fin no puede ser menor al de inicio :( \n";
    }
}

int main()
{
    int start, end;
    cout << "Ingrese el turno en el que inicio:  ";
    cin >> start;
    cout << "Ingrese el turno en el que culmino:  ";
    cin >> end;

    checkTurn(start, end);

    return 0;
}