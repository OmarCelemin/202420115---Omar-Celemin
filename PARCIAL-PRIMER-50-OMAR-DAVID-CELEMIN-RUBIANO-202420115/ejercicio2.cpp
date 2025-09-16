#include <iostream>

using namespace std;

void checkTurn(int start, int end)
{
    if (start < end)
    {
        cout << "La maquina opero durante los turnos: ";
        for (int i = start; i <= end; i++)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << "Error parametros mal ingresados :( ";
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