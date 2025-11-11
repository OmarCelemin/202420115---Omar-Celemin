#include "iostream"
using namespace std;

void menu()
{
    int userSelection;
    bool status = 1;
    string sales[0];

    while (status)
    {
        cout << "Por favor seleccione: \n\n 1. Registrar o reiniciar ventas.\n 2. Mostrar todas las ventas. \n 3. Modificar una venta. \n 4. Buscar una venta. \n 5. Mostrar ventas dentro de rango de precios. \n 6. Calcular total de ventas. \n 7. Salir. ";
        cout << "Ingrese una opcion: ";
        cin >> userSelection;

        switch (userSelection)
        {
        case 1:
            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            break;

        case 5:
            break;

        case 6:
            break;

        case 7:
        status = 0;
            break;

        default:
            cout << "Opcion no valida :(";
            break;
        }
        userSelection = 0;
    }
}

int main()
{
    menu();
    return 0;
}